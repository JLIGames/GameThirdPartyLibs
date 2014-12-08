//
//  DeviceInputTime.h
//  JLIGameEngineTest
//
//  Created by James Folk on 12/8/14.
//  Copyright (c) 2014 James Folk. All rights reserved.
//

#ifndef __JLIGameEngineTest__DeviceInputTime__
#define __JLIGameEngineTest__DeviceInputTime__

#include "Util.h"
#include "AbstractObject.h"

namespace jli
{
    class DeviceInputTime : public AbstractObject
    {
    public:
        virtual const char *getClassName()const;
        virtual u32 getType()const = 0;
        
        void setTimeStampFrame(const f64 timeStamp);
        void setTimeStampTick(const f64 timeStamp);
        f64 getTimeStampFrame()const;
        f64 getTimeStampTick()const;
    
    protected:
        DeviceInputTime();
        DeviceInputTime(const DeviceInputTime &rhs);
        DeviceInputTime &operator=(const DeviceInputTime &rhs);
        
    private:
        f64 m_timestamp_frame;
        f64 m_timestamp_soundtick;
    };
}

#endif /* defined(__JLIGameEngineTest__DeviceInputTime__) */
