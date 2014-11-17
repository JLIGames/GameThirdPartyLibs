//
//  AbstractState.h
//  JLIGameEngineTest
//
//  Created by James Folk on 11/10/14.
//  Copyright (c) 2014 James Folk. All rights reserved.
//

#ifndef JLIGameEngineTest_AbstractState_h
#define JLIGameEngineTest_AbstractState_h

#include "btAlignedAllocator.h"
#include "AbstractFactoryObject.h"
#include "AbstractBuilder.h"
#include "Util.h"

class Telegram;

template <class OBJECT_TYPE>
ATTRIBUTE_ALIGNED16(class) AbstractState :
public AbstractFactoryObject
{
protected:
    AbstractState(const AbstractBuilder &builder);
    AbstractState(const AbstractState &copy);
    virtual ~AbstractState() = 0;
    
    BT_DECLARE_ALIGNED_ALLOCATOR();
    
    AbstractState &operator=(const AbstractState&);
    
//###################################################################
public:
    virtual bool isFinished()const;
    virtual void enableFinished(const bool = true);
    
    virtual bool isInUse()const;
    virtual void enableInUse(const bool = true);
    
    virtual void enter(OBJECT_TYPE*) = 0;
    virtual void update(OBJECT_TYPE*, f32) = 0;
    virtual void exit(OBJECT_TYPE*) = 0;
    virtual bool onMessage(OBJECT_TYPE*,const Telegram&) = 0;
    
private:
    
    bool m_isFinished;
    bool m_isInUse;
};

template <class OBJECT_TYPE>
AbstractState<OBJECT_TYPE>::AbstractState(const AbstractBuilder &builder):
AbstractFactoryObject(this),
m_isFinished(false),
m_isInUse(false)
{
    
}

template <class OBJECT_TYPE>
AbstractState<OBJECT_TYPE>::AbstractState(const AbstractState &copy):
AbstractFactoryObject(this),
m_isFinished(copy.m_isFinished),
m_isInUse(false)
{
    
}

template <class OBJECT_TYPE>
AbstractState<OBJECT_TYPE>::~AbstractState()
{
    jliAssertMsg(!m_isInUse, "state is still in the state machine queue");
}

template <class OBJECT_TYPE>
AbstractState<OBJECT_TYPE> &AbstractState<OBJECT_TYPE>::operator=(const AbstractState &rhs)
{
    if(this != &rhs)
    {
        m_isFinished = rhs.m_isFinished;
        m_isInUse = false;
    }
    return *this;
}

template <class OBJECT_TYPE>
bool AbstractState<OBJECT_TYPE>::isFinished()const
{
    return m_isFinished;
}

template <class OBJECT_TYPE>
void AbstractState<OBJECT_TYPE>::enableFinished(const bool finished)
{
    m_isFinished = finished;
}

template <class OBJECT_TYPE>
bool AbstractState<OBJECT_TYPE>::isInUse()const
{
    return m_isInUse;
}

template <class OBJECT_TYPE>
void AbstractState<OBJECT_TYPE>::enableInUse(const bool inqueue)
{
    m_isInUse = inqueue;
}



class Telegram
{
public:
    //the entity that sent this telegram
    AbstractFactoryObject *Sender;
    
    //the entity that is to receive this telegram
    AbstractFactoryObject *Receiver;
    
    //the message itself. These are all enumerated in the file
    //"MessageTypes.h"
    s32          Msg;
    
    //messages can be dispatched immediately or delayed for a specified amount
    //of time. If a delay is necessary this field is stamped with the time
    //the message should be dispatched.
    f32       DispatchTime;
    
    //any additional information that may accompany the message
    void*        ExtraInfo;
    
    
    Telegram():
    Sender(NULL),
    Receiver(NULL),
    Msg(0),
    DispatchTime(NULL),
    ExtraInfo(NULL)
    {}
    
    
    Telegram(f32 time,
             AbstractFactoryObject *sender,
             AbstractFactoryObject *receiver,
             s32    msg,
             void*  info = NULL) :
    Sender(sender),
    Receiver(receiver),
    Msg(msg),
    DispatchTime(time),
    ExtraInfo(info)
    {}
    
};

#endif
