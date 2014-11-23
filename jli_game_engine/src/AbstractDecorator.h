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
#include "AbstractObject.h"

namespace jli
{
    class AbstractDecorator:
    public AbstractObject
    {
protected:
    AbstractDecorator():m_pParent(NULL){}
    virtual ~AbstractDecorator(){}
public:
    virtual AbstractObject *getParent()
    {
        return m_pParent;
    }
    
    virtual const AbstractObject *getParent() const
    {
        return m_pParent;
    }
    
    virtual bool hasParent()const
    {
        return (NULL != m_pParent);
    }
    
    virtual void setParent(AbstractObject *parent)
    {
        jliAssertMsg(parent, "object is null");
        
        m_pParent = parent;
    }
    
    virtual void removeParent()
    {
        m_pParent = NULL;
    }
    
    virtual bool removeFromParent()
    {
        AbstractDecorator *parent = dynamic_cast<AbstractDecorator*>(getParent());
        
        if(parent && parent->hasChild(this))
        {
            parent->removeChild(this);
            return true;
        }
        return false;
    }
    
    bool hasChild(AbstractObject *object)const
    {
        jliAssertMsg(object, "object is null");
        return (m_Decorators.size() != m_Decorators.findLinearSearch(object));
    }
    
    bool hasChildren()const
    {
        return (m_Decorators.size() > 0);
    }
    
    AbstractObject*	getChild(const u32 index)
    {
        jliAssertMsg(index < m_Decorators.size(), "index must be smaller than the size of the array");
        return m_Decorators.at(index);
    }
    
    void addChild(AbstractDecorator *object)
    {
        jliAssertMsg(this != object, "cannot decorate self with self");
        jliAssertMsg(!hasChild(object), "already has the decorator");
        
        AbstractObject *_this = dynamic_cast<AbstractObject*>(this);
        
        object->setParent(_this);
        
        m_Decorators.push_back(object);
    }
    
    void removeChild(const u32 index)
    {
        jliAssertMsg(index < m_Decorators.size(), "index must be smaller than the size of the array");
        removeChild(getChild(index));
    }
    
    void removeChild(AbstractObject *object)
    {
        jliAssertMsg(object, "object is null");
        m_Decorators.remove(object);
    }
    
    void removeChildren()
    {
        m_Decorators.clear();
    }
    
    u32 children()const
    {
        return m_Decorators.size();
    }
    
    virtual void applyChild(const u32 index){}
    virtual void applyChildren()
    {
        for (s32 i = 0; i < m_Decorators.size(); ++i)
        {
            applyChild(i);
        }
    }
    
private:
    AbstractDecorator(const AbstractDecorator &);
    AbstractDecorator &operator=(const AbstractDecorator &rhs);
    
    btAlignedObjectArray<AbstractObject*> m_Decorators;
    AbstractObject *m_pParent;
};
}

#endif
