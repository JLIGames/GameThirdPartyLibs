//
//  AbstractBehavior.h
//  JLIGameEngineTest
//
//  Created by James Folk on 11/10/14.
//  Copyright (c) 2014 James Folk. All rights reserved.
//

#ifndef JLIGameEngineTest_AbstractBehavior_h
#define JLIGameEngineTest_AbstractBehavior_h

#include "AbstractObject.h"

template <class OWNER_TYPE>
class AbstractBehavior :
virtual public AbstractObject
{
public:
    AbstractBehavior(OWNER_TYPE *owner = NULL);
    virtual ~AbstractBehavior() = 0;
    
    virtual OWNER_TYPE *getOwner();
    virtual const OWNER_TYPE *getOwner() const;
    virtual void setOwner(OWNER_TYPE* owner);
    
    virtual bool hasOwner()const;
private:
    AbstractBehavior(const AbstractBehavior&);
    AbstractBehavior &operator=(const AbstractBehavior&);
    
    OWNER_TYPE *m_pOwner;
};

template <class OWNER_TYPE>
AbstractBehavior<OWNER_TYPE>::AbstractBehavior(OWNER_TYPE *owner):
AbstractObject(),
m_pOwner(owner){}

template <class OWNER_TYPE>
AbstractBehavior<OWNER_TYPE>::~AbstractBehavior(){}

template <class OWNER_TYPE>
OWNER_TYPE*	AbstractBehavior<OWNER_TYPE>::getOwner()
{
    return m_pOwner;
}

template <class OWNER_TYPE>
const OWNER_TYPE*	AbstractBehavior<OWNER_TYPE>::getOwner() const
{
    return m_pOwner;
}

template <class OWNER_TYPE>
void AbstractBehavior<OWNER_TYPE>::setOwner(OWNER_TYPE* owner)
{
    m_pOwner = owner;
}

template <class OWNER_TYPE>
bool AbstractBehavior<OWNER_TYPE>::hasOwner()const
{
    return (NULL != m_pOwner);
}

#endif
