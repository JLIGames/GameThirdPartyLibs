//
//  DeviceTouch.h
//  JLIGameEngineTest
//
//  Created by James Folk on 12/8/14.
//  Copyright (c) 2014 James Folk. All rights reserved.
//

#ifndef __JLIGameEngineTest__DeviceTouch__
#define __JLIGameEngineTest__DeviceTouch__

#include "DeviceInputTime.h"
#include "btVector2.h"

namespace jli
{
    class DeviceTouch : public DeviceInputTime
    {
    public:
        DeviceTouch();
        
        DeviceTouch(const DeviceTouch &rhs);
        DeviceTouch &operator=(const DeviceTouch &rhs);
        DeviceTouch(const void *touch, int n, int N);
        
        virtual ~DeviceTouch();
        
        virtual const char *getClassName()const;
        virtual u32 getType()const;
        operator std::string() const;
        
        const btVector2 &getPosition()const;
        const btVector2 &getPreviousPosition()const;
        unsigned int getAddress()const;
        unsigned int getTapCount()const;
        unsigned int getTouchIndex()const;
        unsigned int getTouchTotal()const;
        
        void set(const void *touch, int n, int N);
    private:
        void convert(DeviceTouch &t, const void *touch);
        
        btVector2 m_pos;
        btVector2 m_prev_pos;
        u32 m_address;
        u32 m_tapCount;
        u32 m_touchIndex;
        u32 m_touchTotal;
    };
}

#endif /* defined(__JLIGameEngineTest__DeviceTouch__) */
