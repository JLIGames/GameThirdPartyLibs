//
//  AbstractDecorator.h
//  JLIGameEngineTest
//
//  Created by James Folk on 11/15/14.
//  Copyright (c) 2014 James Folk. All rights reserved.
//

#ifndef JLIGameEngineTest_AbstractDecorator_h
#define JLIGameEngineTest_AbstractDecorator_h

#include "Util.h"
#include "btAlignedObjectArray.h"

template <class OBJECT>
ATTRIBUTE_ALIGNED16(class) AbstractDecorator
{
protected:
    AbstractDecorator();
    AbstractDecorator(const AbstractDecorator &);
    virtual ~AbstractDecorator(){}

    BT_DECLARE_ALIGNED_ALLOCATOR();

    AbstractDecorator &operator=(const AbstractDecorator &rhs);

public:
    virtual void applyDecorator(const u32 index) = 0;

    bool hasDecorator(OBJECT *object)const;
    OBJECT*	getDecorator(const u32 index);
    void addDecorator(OBJECT *object);
    void removeDecorator(const u32 index);
    void removeDecorator(OBJECT *object);
    u32 decorators()const;

    virtual void applyDecorators();

private:
    btAlignedObjectArray<OBJECT*> m_Decorators;
};

template <class OBJECT>
AbstractDecorator<OBJECT>::AbstractDecorator()
{
    
}

template <class OBJECT>
AbstractDecorator<OBJECT>::AbstractDecorator(const AbstractDecorator &copy)
{
    m_Decorators = copy.m_Decorators;
}

template <class OBJECT>
AbstractDecorator<OBJECT> &AbstractDecorator<OBJECT>::operator=(const AbstractDecorator &rhs)
{
    if(this != &rhs)
    {
        m_Decorators = rhs.m_Decorators;
    }
    return *this;
}

template <class OBJECT>
bool AbstractDecorator<OBJECT>::hasDecorator(OBJECT *object)const
{
    jliAssertMsg(object, "object is null");
    return (m_Decorators.size() != m_Decorators.findLinearSearch(object));
}

template <class OBJECT>
OBJECT*	AbstractDecorator<OBJECT>::getDecorator(const u32 index)
{
    jliAssertMsg(index < m_Decorators.size(), "index must be smaller than the size of the array");
    return m_Decorators.at(index);
}

template <class OBJECT>
void AbstractDecorator<OBJECT>::addDecorator(OBJECT *object)
{
    jliAssertMsg(this != object, "cannot decorate self with self");
    jliAssertMsg(!hasDecorator(object), "already has the decorator");
    
    m_Decorators.push_back(object);
}

template <class OBJECT>
void AbstractDecorator<OBJECT>::removeDecorator(const u32 index)
{
    jliAssertMsg(index < m_Decorators.size(), "index must be smaller than the size of the array");
    removeDecorator(getDecorator(index));
}

template <class OBJECT>
void AbstractDecorator<OBJECT>::removeDecorator(OBJECT *object)
{
    jliAssertMsg(object, "object is null");
    m_Decorators.remove(object);
}

template <class OBJECT>
u32 AbstractDecorator<OBJECT>::decorators()const
{
    return m_Decorators.size();
}

template <class OBJECT>
void AbstractDecorator<OBJECT>::applyDecorators()
{
    for (s32 i = 0; i < m_Decorators.size(); ++i)
    {
        applyDecorator(i);
    }
}

#endif
