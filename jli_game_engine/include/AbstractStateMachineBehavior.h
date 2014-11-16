//
//  AbstractStateMachineBehavior.h
//  JLIGameEngineTest
//
//  Created by James Folk on 11/15/14.
//  Copyright (c) 2014 James Folk. All rights reserved.
//

#ifndef JLIGameEngineTest_AbstractStateMachineBehavior_h
#define JLIGameEngineTest_AbstractStateMachineBehavior_h

#include "AbstractObject.h"

template <class OWNER_TYPE, class STATEMACHINE_TYPE>
ATTRIBUTE_ALIGNED16(class) AbstractStateMachineBehavior :
public AbstractBehavior<OWNER_TYPE>
{
protected:
    AbstractStateMachineBehavior();
    AbstractStateMachineBehavior(const AbstractStateMachineBehavior &);
    virtual ~AbstractStateMachineBehavior();
    
    BT_DECLARE_ALIGNED_ALLOCATOR();
    
    AbstractStateMachineBehavior &operator=(const AbstractStateMachineBehavior &rhs);
public:
    void setStateMachine(STATEMACHINE_TYPE *sm);
    STATEMACHINE_TYPE *getStateMachine();
    bool hasStateMachine()const;
private:
    STATEMACHINE_TYPE *m_StateMachine;
};


template <class OWNER_TYPE, class STATEMACHINE_TYPE>
AbstractStateMachineBehavior<OWNER_TYPE, STATEMACHINE_TYPE>::AbstractStateMachineBehavior() :
m_StateMachine(NULL)
{
    
}

template <class OWNER_TYPE, class STATEMACHINE_TYPE>
AbstractStateMachineBehavior<OWNER_TYPE, STATEMACHINE_TYPE>::AbstractStateMachineBehavior(const AbstractStateMachineBehavior &copy):
m_StateMachine(copy.m_StateMachine);
{
    
}

template <class OWNER_TYPE, class STATEMACHINE_TYPE>
AbstractStateMachineBehavior<OWNER_TYPE, STATEMACHINE_TYPE>::~AbstractStateMachineBehavior()
{
    
}

template <class OWNER_TYPE, class STATEMACHINE_TYPE>
AbstractStateMachineBehavior<OWNER_TYPE, STATEMACHINE_TYPE> &AbstractStateMachineBehavior<OWNER_TYPE, STATEMACHINE_TYPE>::operator=(const AbstractStateMachineBehavior &rhs)
{
    if(this != &rhs)
    {
        m_StateMachine = rhs.m_StateMachine;
    }
    return *this;
}

template <class OWNER_TYPE, class STATEMACHINE_TYPE>
void AbstractStateMachineBehavior<OWNER_TYPE, STATEMACHINE_TYPE>::setStateMachine(STATEMACHINE_TYPE *sm)
{
    m_StateMachine->setOwner(NULL);
    m_StateMachine = sm;
    if(m_StateMachine)
        m_StateMachine->setOwner(this);
}

template <class OWNER_TYPE, class STATEMACHINE_TYPE>
STATEMACHINE_TYPE *AbstractStateMachineBehavior<OWNER_TYPE, STATEMACHINE_TYPE>::getStateMachine()
{
    return m_StateMachine;
}

template <class OWNER_TYPE, class STATEMACHINE_TYPE>
bool AbstractStateMachineBehavior<OWNER_TYPE, STATEMACHINE_TYPE>::hasStateMachine()const
{
    return (NULL != m_StateMachine);
}




//template <class STATEMACHINE_TYPE, class OWNER_TYPE>
//ATTRIBUTE_ALIGNED16(class) AbstractStateMachineBehavior :
//public AbstractBehavior<OWNER_TYPE>
//{
//public:
//    AbstractStateMachineBehavior();
//
//    virtual ~AbstractStateMachineBehavior();
//
//    BT_DECLARE_ALIGNED_ALLOCATOR();
//    
//    void setStateMachine(STATEMACHINE_TYPE *sm);
//    STATEMACHINE_TYPE *getStateMachine();
//
//    void createStateMachine(const AbstractBuilder &builder);
//    void createStateMachine(const STATEMACHINE_TYPE &copy);
//    void destroyStateMachine();
//
//private:
//    AbstractStateMachineBehavior(const AbstractStateMachineBehavior&);
//    AbstractStateMachineBehavior &operator=(const AbstractStateMachineBehavior&);
//    
//    STATEMACHINE_TYPE *m_ObjectStateMachine;
//};
//
//
//template <class STATEMACHINE_TYPE>
//AbstractStateMachineBehavior<STATEMACHINE_TYPE>::AbstractStateMachineBehavior():
//m_ObjectStateMachine(NULL)
//{
//    
//}
//
//template <class STATEMACHINE_TYPE>
//AbstractStateMachineBehavior<STATEMACHINE_TYPE>::~AbstractStateMachineBehavior()
//{
//    
//}
//
//template <class STATEMACHINE_TYPE>
//void AbstractStateMachineBehavior<STATEMACHINE_TYPE>::setStateMachine(STATEMACHINE_TYPE *sm)
//{
    m_ObjectStateMachine->setOwner(NULL);
    m_ObjectStateMachine = sm;
    m_ObjectStateMachine->setOwner(this);
//
//}
//
//template <class STATEMACHINE_TYPE>
//STATEMACHINE_TYPE *AbstractStateMachineBehavior<STATEMACHINE_TYPE>::getStateMachine()
//{
//    return m_ObjectStateMachine;
//}
//
//template <class STATEMACHINE_TYPE>
//void AbstractStateMachineBehavior<STATEMACHINE_TYPE>::destroyStateMachine()
//{
//    
//}
#endif
