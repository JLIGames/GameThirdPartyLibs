//
//  AbstractStateMachine.h
//  JLIGameEngineTest
//
//  Created by James Folk on 11/10/14.
//  Copyright (c) 2014 James Folk. All rights reserved.
//

#ifndef JLIGameEngineTest_AbstractStateMachine_h
#define JLIGameEngineTest_AbstractStateMachine_h

#include "AbstractFactoryObject.h"
#include "AbstractBehavior.h"
#include "AbstractState.h"

#include <queue>

template <class OWNER_TYPE>
ATTRIBUTE_ALIGNED16(class) AbstractStateMachine :
public AbstractFactoryObject,
public AbstractBehavior<OWNER_TYPE>
{
protected:
    AbstractStateMachine(const AbstractBuilder &builder);
    AbstractStateMachine(const AbstractStateMachine &copy);
    virtual ~AbstractStateMachine();
    
    BT_DECLARE_ALIGNED_ALLOCATOR();
    
    AbstractStateMachine &operator=(const AbstractStateMachine&);
    
    //###################################################################
public:
    void update(f32);
    
    bool handleMessage(const Telegram &);
    
    void pushState(AbstractState<OWNER_TYPE> *);
    
    AbstractState<OWNER_TYPE>*const getState() const;
    AbstractState<OWNER_TYPE>*const getPreviousState() const;
private:
    AbstractState<OWNER_TYPE>* m_pCurrentState;
    AbstractState<OWNER_TYPE>* m_pPreviousState;
    
    std::queue<AbstractState<OWNER_TYPE>*> m_StateQueue;
    
    void setState(AbstractState<OWNER_TYPE>*);
    void changeState(AbstractState<OWNER_TYPE>*);
};

template <class OWNER_TYPE>
AbstractStateMachine<OWNER_TYPE>::AbstractStateMachine(const AbstractBuilder &builder) :
AbstractFactoryObject(this),
m_pCurrentState(NULL),
m_pPreviousState(NULL)
{
    
}

template <class OWNER_TYPE>
AbstractStateMachine<OWNER_TYPE>::AbstractStateMachine(const AbstractStateMachine &copy) :
AbstractFactoryObject(this),
m_pCurrentState(copy.m_pCurrentState),
m_pPreviousState(copy.m_pPreviousState)
{
    
}

template <class OWNER_TYPE>
AbstractStateMachine<OWNER_TYPE>::~AbstractStateMachine()
{
    
}

template <class OWNER_TYPE>
AbstractStateMachine<OWNER_TYPE> &AbstractStateMachine<OWNER_TYPE>::operator=(const AbstractStateMachine &rhs)
{
    if (this != &rhs)
    {
        m_pCurrentState = rhs.m_pCurrentState;
        m_pPreviousState = rhs.m_pPreviousState;
    }
    return *this;
}

template <class OWNER_TYPE>
void AbstractStateMachine<OWNER_TYPE>::update(f32 deltaTimeStep)
{
    AbstractState<OWNER_TYPE> *const theCurrentState = getState();
    bool pushNextState = false;
    
    if (theCurrentState)
    {
        pushNextState = theCurrentState->isFinished();
    }
    else
    {
        pushNextState = (m_StateQueue.size() > 0);
    }
    
    if(pushNextState)
    {
        AbstractState<OWNER_TYPE>* theNextState = NULL;
        
        if(!m_StateQueue.empty())
        {
            theNextState = m_StateQueue.front();
            m_StateQueue.pop();
        }
        
        changeState(theNextState);
    }
    else
    {
        if(theCurrentState)
            theCurrentState->update(AbstractBehavior<OWNER_TYPE>::getOwner(),
                                deltaTimeStep);
    }
}

template <class OWNER_TYPE>
bool AbstractStateMachine<OWNER_TYPE>::handleMessage(const Telegram &msg)
{
    const AbstractState<OWNER_TYPE> *theCurrentState = getState();
    
    if (theCurrentState &&
        theCurrentState->onMessage(AbstractBehavior<OWNER_TYPE>::getOwner(), msg))
    {
        return true;
    }
    return false;
}

template <class OWNER_TYPE>
void AbstractStateMachine<OWNER_TYPE>::pushState(AbstractState<OWNER_TYPE> *state)
{
    state->enableInUse(true);
    m_StateQueue.push(state);
}

template <class OWNER_TYPE>
AbstractState<OWNER_TYPE>*const AbstractStateMachine<OWNER_TYPE>::getState() const
{
    return m_pCurrentState;
}

template <class OWNER_TYPE>
AbstractState<OWNER_TYPE>*const AbstractStateMachine<OWNER_TYPE>::getPreviousState() const
{
    return m_pPreviousState;
}

template <class OWNER_TYPE>
void AbstractStateMachine<OWNER_TYPE>::setState(AbstractState<OWNER_TYPE>* state)
{
    m_pCurrentState = state;
}

template <class OWNER_TYPE>
void AbstractStateMachine<OWNER_TYPE>::changeState(AbstractState<OWNER_TYPE>* state)
{
    
    AbstractState<OWNER_TYPE> *theCurrentState = getState();
    
    m_pPreviousState = theCurrentState;
    
    if(theCurrentState)
    {
        theCurrentState->exit(AbstractBehavior<OWNER_TYPE>::getOwner());
        theCurrentState->enableInUse(false);
        theCurrentState->enableFinished(false);
    }
    
    setState(state);
    
    theCurrentState = getState();
    if(theCurrentState)
    {
        theCurrentState->enter(AbstractBehavior<OWNER_TYPE>::getOwner());
    }
}

#endif
