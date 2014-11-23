//
//  ActionBuilder.h
//  JLIGameEngineTest
//
//  Created by James Folk on 11/22/14.
//  Copyright (c) 2014 James Folk. All rights reserved.
//

#ifndef __JLIGameEngineTest__ActionBuilder__
#define __JLIGameEngineTest__ActionBuilder__

#include "btAlignedObjectArray.h"
#include "Util.h"
#include "AbstractBuilder.h"
#include "btSerializer.h"

namespace jli
{
    ATTRIBUTE_ALIGNED16(class) ActionBuilder :
    public AbstractBuilder
    {
        friend class WorldFactory;
    protected:
        ActionBuilder();
        ActionBuilder(const ActionBuilder &);
        ActionBuilder(const AbstractBuilder&);
        BT_DECLARE_ALIGNED_ALLOCATOR();
        virtual ~ActionBuilder();
        
        ActionBuilder &operator=(const ActionBuilder &);
        
    public:
        virtual	s32	calculateSerializeBufferSize() const;
        virtual	void serialize(void*, btSerializer*) const;
        
        virtual u32 getObjectType()const;
        virtual const char *getName()const;
        virtual u32 getType()const;
    };
}

#include "WorldFactory.h"

namespace jli
{
    ActionBuilder::ActionBuilder()
    {
    }
    
    ActionBuilder::ActionBuilder(const ActionBuilder &copy)
    {
        
    }
    
    ActionBuilder::ActionBuilder(const AbstractBuilder &builder)
    {
        
    }
    
    ActionBuilder::~ActionBuilder()
    {
    }
    
    ActionBuilder &ActionBuilder::operator=(const ActionBuilder &rhs)
    {
        if (this != &rhs)
        {
            
        }
        return *this;
    }
    
    s32	ActionBuilder::calculateSerializeBufferSize() const
    {
        return 0;
    }
    
    void ActionBuilder::serialize(void* dataBuffer, btSerializer* serializer) const
    {
        
    }
    
    u32 ActionBuilder::getObjectType()const
    {
        return type::Action;
    }
    
    const char *ActionBuilder::getName()const
    {
        return "ActionBuilder";
    }
    
    u32 ActionBuilder::getType()const
    {
        return type::ActionBuilder;
    }
}

#endif /* defined(__JLIGameEngineTest__ActionBuilder__) */
