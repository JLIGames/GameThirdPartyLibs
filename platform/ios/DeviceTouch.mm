//
//  DeviceTouch.cpp
//  JLIGameEngineTest
//
//  Created by James Folk on 12/8/14.
//  Copyright (c) 2014 James Folk. All rights reserved.
//

#include "DeviceTouch.h"
#include <UIKit/UIKit.h>
#include "WorldFactory.h"

namespace jli
{
    DeviceTouch::DeviceTouch(){}
    
    DeviceTouch::DeviceTouch(const DeviceTouch &rhs):
    DeviceInputTime(rhs),
    m_pos(rhs.m_pos),
    m_prev_pos(rhs.m_prev_pos),
    m_address(rhs.m_address),
    m_tapCount(rhs.m_tapCount),
    m_touchIndex(rhs.m_touchIndex),
    m_touchTotal(rhs.m_touchTotal)
    {
        
    }
    DeviceTouch &DeviceTouch::operator=(const DeviceTouch &rhs)
    {
        if(this != &rhs)
        {
            DeviceInputTime::operator=(rhs);
            
            m_pos = rhs.m_pos;
            m_prev_pos = rhs.m_prev_pos;
            m_address = rhs.m_address;
            m_tapCount = rhs.m_tapCount;
            m_touchIndex = rhs.m_touchIndex;
            m_touchTotal = rhs.m_touchTotal;
        }
        return *this;
    }
    
    
    DeviceTouch::DeviceTouch(const void *touch, int n, int N) :
    DeviceInputTime()
    {
        set(touch, n, N);
    }
    
    DeviceTouch::~DeviceTouch()
    {
        
    }
    
    const char *DeviceTouch::getClassName()const
    {
        return "DeviceTouch";
    }
    
    u32 DeviceTouch::getType()const
    {
        return JLI_OBJECT_TYPE_DeviceTouch;
    }
    
    DeviceTouch::operator std::string() const
    {
        char buffer[1024];
        
        sprintf(buffer,"\n\
                Current Pos [%.0f, %.0f]\n\
                Previous Pos [%.0f, %.0f]\n\
                Frame [%f]\n\
                Tick [%f]\n\
                Address [%d]\n\
                TapCount [%d]\n\
                Touch %d of %d\n",
                m_pos.x(), m_pos.y(),
                m_prev_pos.x(), m_prev_pos.y(),
                getTimeStampFrame(), getTimeStampTick(),
                m_address, m_tapCount,
                m_touchIndex + 1, m_touchTotal);
        return std::string(buffer);
    }
    
    const btVector2 &DeviceTouch::getPosition()const{return m_pos;}
    const btVector2 &DeviceTouch::getPreviousPosition()const{return m_prev_pos;}
    unsigned int DeviceTouch::getAddress()const{return m_address;}
    unsigned int DeviceTouch::getTapCount()const{return m_tapCount;}
    unsigned int DeviceTouch::getTouchIndex()const{return m_touchIndex;}
    unsigned int DeviceTouch::getTouchTotal()const{return m_touchTotal;}
    
    
    
    void DeviceTouch::set(const void *touch, int n, int N)
    {
        convert(*this, touch);
        
        m_touchIndex = n;
        m_touchTotal = N;
    }
    
    void DeviceTouch::convert(DeviceTouch &t, const void *_touch)
    {
        if(_touch)
        {
            UITouch *touch = (__bridge UITouch*)_touch;
            t.setTimeStampFrame(touch.timestamp);
            CGPoint p = [touch locationInView:touch.view];
            t.m_pos.setX(p.x);
            t.m_pos.setY(p.y);
            p = [touch previousLocationInView:touch.view];
            t.m_prev_pos.setX(p.x);
            t.m_prev_pos.setY(p.y);
            t.m_address = [touch hash];
            t.m_tapCount = [touch tapCount];
            
            CGFloat scaleFactor = touch.view.contentScaleFactor;
            
            t.m_pos *= scaleFactor;
            t.m_prev_pos *= scaleFactor;
            
            //TODO: Need to get the height of the view...
            
            //            btScalar height = CameraFactory::getScreenHeight();
            //
            //            t.m_pos.setY((height) - t.m_pos.y());
            //            t.m_prev_pos.setY((height) - t.m_prev_pos.y());
        }
        else
        {
            t.setTimeStampFrame(0);
            t.m_pos.setX(0);
            t.m_pos.setY(0);
            t.m_prev_pos.setX(0);
            t.m_prev_pos.setY(0);
            t.m_address = NULL;
            t.m_tapCount = 0;
            
            CGFloat scaleFactor = 1.0f;
            
            t.m_pos *= scaleFactor;
            t.m_prev_pos *= scaleFactor;
            
            t.m_pos.setY(0);
            t.m_prev_pos.setY(0);
        }
    }
    
}