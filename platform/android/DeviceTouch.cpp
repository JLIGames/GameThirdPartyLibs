//
//  DeviceTouch.mm
//  JLIGameEngineTest
//
//  Created by James Folk on 12/8/14.
//  Copyright (c) 2014 James Folk. All rights reserved.
//

#include "DeviceTouch.h"
//#include "WorldFactory.h"

namespace jli
{
	void DeviceTouch::convert(DeviceTouch &t, const void *_touch)
    {
        if(_touch)
        {
//            UITouch *touch = (__bridge UITouch*)_touch;
//            t.setTimeStampFrame(touch.timestamp);
//            CGPoint p = [touch locationInView:touch.view];
//            t.m_pos.setX(p.x);
//            t.m_pos.setY(p.y);
//            p = [touch previousLocationInView:touch.view];
//            t.m_prev_pos.setX(p.x);
//            t.m_prev_pos.setY(p.y);
//            t.m_address = [touch hash];
//            t.m_tapCount = [touch tapCount];
//
//            CGFloat scaleFactor = touch.view.contentScaleFactor;
//
//            t.m_pos *= scaleFactor;
//            t.m_prev_pos *= scaleFactor;

            //TODO: Need to get the height of the view...

            //            btScalar height = CameraFactory::getScreenHeight();
            //
            //            t.m_pos.setY((height) - t.m_pos.y());
            //            t.m_prev_pos.setY((height) - t.m_prev_pos.y());
        }
        else
        {
//            t.setTimeStampFrame(0);
//            t.m_pos.setX(0);
//            t.m_pos.setY(0);
//            t.m_prev_pos.setX(0);
//            t.m_prev_pos.setY(0);
//            t.m_address = NULL;
//            t.m_tapCount = 0;
//
//            CGFloat scaleFactor = 1.0f;
//
//            t.m_pos *= scaleFactor;
//            t.m_prev_pos *= scaleFactor;
//
//            t.m_pos.setY(0);
//            t.m_prev_pos.setY(0);
        }
    }
}
