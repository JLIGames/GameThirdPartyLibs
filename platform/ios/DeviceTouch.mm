//
//  DeviceTouch.mm
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
    void DeviceTouch::convert(DeviceTouch &t, const void *_touch)
    {
        if(_touch)
        {
            UITouch *touch = (__bridge UITouch*)_touch;
            t.setTimeStampFrame(touch.timestamp);
            CGPoint p = [touch locationInView:touch.view];
            m_xpos = p.x;
            m_ypos = p.y;
            p = [touch previousLocationInView:touch.view];
            m_prev_xpos = p.x;
            m_prev_ypos = p.y;
            t.m_address = [touch hash];
            t.m_tapCount = [touch tapCount];
            
            CGFloat scaleFactor = touch.view.contentScaleFactor;
            
            m_xpos *= scaleFactor;
            m_ypos *= scaleFactor;
            m_prev_xpos *= scaleFactor;
            m_prev_ypos *= scaleFactor;
            
            //TODO: Need to get the height of the view...
            
            //            btScalar height = CameraFactory::getScreenHeight();
            //
            //            t.m_pos.setY((height) - t.m_pos.y());
            //            t.m_prev_pos.setY((height) - t.m_prev_pos.y());
        }
        else
        {
            t.setTimeStampFrame(0);
            m_xpos = 0;
            m_ypos = 0;
            m_prev_xpos = 0;
            m_prev_ypos = 0;
            t.m_address = NULL;
            t.m_tapCount = 0;
            
            CGFloat scaleFactor = 1.0f;
            
            m_xpos *= scaleFactor;
            m_ypos *= scaleFactor;
            m_prev_xpos *= scaleFactor;
            m_prev_ypos *= scaleFactor;
        }
    }
}