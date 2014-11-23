//
//  Node.h
//  JLIGameEngineTest
//
//  Created by James Folk on 11/22/14.
//  Copyright (c) 2014 James Folk. All rights reserved.
//

#ifndef __JLIGameEngineTest__Node__
#define __JLIGameEngineTest__Node__

#include "AbstractFactoryObject.h"
#include "AbstractBuilder.h"
#include "AbstractDecorator.h"

namespace jli
{
    ATTRIBUTE_ALIGNED16(class) Node:
    public AbstractFactoryObject,
    public AbstractDecorator
    {
        friend class WorldFactory;
    public:
        Node();
        Node(const AbstractBuilder&);
        Node(const Node &);
        BT_DECLARE_ALIGNED_ALLOCATOR();
        
        virtual ~Node();
        Node &operator=(const Node &);
        
        virtual	s32	calculateSerializeBufferSize() const;
        virtual	void serialize(void*, btSerializer*) const;
        
        virtual const char *getName()const;
        virtual u32 getType()const;
        
        //TODO: fill in specific methods for Node
    protected:
    private:
    };
}

#endif /* defined(__JLIGameEngineTest__Node__) */
