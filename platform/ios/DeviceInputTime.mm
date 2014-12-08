//
//  DeviceInputTime.cpp
//  JLIGameEngineTest
//
//  Created by James Folk on 12/8/14.
//  Copyright (c) 2014 James Folk. All rights reserved.
//

#include "DeviceInputTime.h"

namespace jli
{
    DeviceInputTime::DeviceInputTime():
    m_timestamp_frame(0),
    m_timestamp_soundtick(0)
    {
    }
    
    DeviceInputTime::DeviceInputTime(const DeviceInputTime &rhs):
    m_timestamp_frame(rhs.m_timestamp_frame),
    m_timestamp_soundtick(rhs.m_timestamp_soundtick)
    {
        
    }
    DeviceInputTime &DeviceInputTime::operator=(const DeviceInputTime &rhs)
    {
        if(this != &rhs)
        {
            m_timestamp_frame = rhs.m_timestamp_frame;
            m_timestamp_soundtick = rhs.m_timestamp_soundtick;
        }
        return *this;
    }
    
    const char *DeviceInputTime::getClassName()const
    {
        return "DeviceInputTime";
    }
    
    void DeviceInputTime::setTimeStampFrame(const f64 timeStamp){
        m_timestamp_frame = timeStamp;
    }
    void DeviceInputTime::setTimeStampTick(const f64 timeStamp)
    {
        m_timestamp_soundtick = timeStamp;
    }
    f64 DeviceInputTime::getTimeStampFrame()const{return m_timestamp_frame;}
    f64 DeviceInputTime::getTimeStampTick()const{return m_timestamp_soundtick;}
}