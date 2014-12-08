//
//  WorldState.h
//  JLIGameEngineTest
//
//  Created by James Folk on 12/6/14.
//  Copyright (c) 2014 James Folk. All rights reserved.
//

#ifndef __JLIGameEngineTest__WorldState__
#define __JLIGameEngineTest__WorldState__

#include "AbstractBuilder.h"
#include "AbstractState.h"
#include "DeviceTouch.h"

namespace jli
{
    ATTRIBUTE_ALIGNED16(class) WorldState:
    public AbstractState<void>
    {
        friend class WorldFactory;
    public:
        WorldState();
        WorldState(const AbstractBuilder&);
        WorldState(const WorldState &);
        BT_DECLARE_ALIGNED_ALLOCATOR();
        virtual ~WorldState();
        WorldState &operator=(const WorldState &);
        
        virtual	s32	calculateSerializeBufferSize() const;
        virtual	void serialize(void*, btSerializer*) const;
        
        virtual const char *getClassName()const;
        virtual u32 getType()const;
        operator std::string() const;
    public:
        virtual void enter(void*);
        virtual void update(void*, f32);
        virtual void exit(void*);
        virtual bool onMessage(void*,const Telegram&)const;
        //TODO: fill in specific methods for WorldState
        
        /**
         *  The name to set to the world.
         *
         *  @param name The name to set to the world.
         */
        void setName(const char *name);
        
        /**
         *  The name of the world.
         *
         *  @return The name of the world.
         */
        const char *getName()const;
        
        void touchDown(const btAlignedObjectArray<jli::DeviceTouch*> &touchArray);
        void touchUp(const btAlignedObjectArray<jli::DeviceTouch*> &touchArray);
        void touchMove(const btAlignedObjectArray<jli::DeviceTouch*> &touchArray);
        void touchCancelled(const btAlignedObjectArray<jli::DeviceTouch*> &touchArray);
    protected:
    private:
        std::string m_Name;
    };
}

#endif /* defined(__JLIGameEngineTest__WorldState__) */
