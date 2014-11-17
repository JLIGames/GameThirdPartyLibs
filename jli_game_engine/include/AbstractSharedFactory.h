//
//  AbstractSharedFactory.h
//  JLIGameEngineTest
//
//  Created by James Folk on 11/9/14.
//  Copyright (c) 2014 James Folk. All rights reserved.
//

#ifndef JLIGameEngineTest_AbstractSharedFactory_h
#define JLIGameEngineTest_AbstractSharedFactory_h

#include "btAlignedObjectArray.h"
#include "btHashMap.h"
#include "AbstractSingleton.h"
#include "AbstractFactoryObject.h"
#include "Util.h"
#include "AbstractBuilder.h"
#include "btSerializer.h"

template <class SINGLETONS_TYPE, class BASE_OBJECT_TYPE>
class AbstractSharedFactory :
public AbstractSingleton<SINGLETONS_TYPE>
{
    typedef btAlignedObjectArray<BASE_OBJECT_TYPE*> ObjectList;
    typedef btHashMap<btHashPtr, s32> ObjectDuplicateMap;
    
public:
    virtual BASE_OBJECT_TYPE *create(const AbstractBuilder &);
    virtual BASE_OBJECT_TYPE *clone(const BASE_OBJECT_TYPE &);
    
    virtual bool has(BASE_OBJECT_TYPE*)const;
    
    virtual void destroy(BASE_OBJECT_TYPE*);
    virtual void destroyAll(BASE_OBJECT_TYPE*);
    virtual void destroyAll();
    
    virtual s32 size();
    virtual s32 instances(const u32);
    
    virtual BASE_OBJECT_TYPE *get(const u32)const;
    virtual void getAll(btAlignedObjectArray<BASE_OBJECT_TYPE*> &objects)const;
    
    virtual s32 index(BASE_OBJECT_TYPE *)const;
    
    virtual	void serialize(btSerializer* serializer);
protected:
    
    AbstractSharedFactory();
    virtual ~AbstractSharedFactory() = 0;
    
    virtual BASE_OBJECT_TYPE *ctor(const AbstractBuilder &) = 0;
    virtual BASE_OBJECT_TYPE *ctor(const BASE_OBJECT_TYPE &) = 0;
    
    BASE_OBJECT_TYPE *create_Internal(const AbstractBuilder &);
    BASE_OBJECT_TYPE *clone_Internal(const BASE_OBJECT_TYPE &);
    void remove_Internal(BASE_OBJECT_TYPE*);
public:
    ObjectList m_ObjectList;
    ObjectDuplicateMap m_ObjectDuplicateMap;
};

template <class SINGLETONS_TYPE, class BASE_OBJECT_TYPE>
BASE_OBJECT_TYPE *AbstractSharedFactory<SINGLETONS_TYPE, BASE_OBJECT_TYPE>::create(const AbstractBuilder &builder)
{
    return create_Internal(builder);
}

template <class SINGLETONS_TYPE, class BASE_OBJECT_TYPE>
BASE_OBJECT_TYPE *AbstractSharedFactory<SINGLETONS_TYPE, BASE_OBJECT_TYPE>::clone(const BASE_OBJECT_TYPE &object)
{
    return clone_Internal(object);
}

template <class SINGLETONS_TYPE, class BASE_OBJECT_TYPE>
bool AbstractSharedFactory<SINGLETONS_TYPE, BASE_OBJECT_TYPE>::has(BASE_OBJECT_TYPE *object)const
{
    return (m_ObjectList.size() != index(object));
}

template <class SINGLETONS_TYPE, class BASE_OBJECT_TYPE>
void AbstractSharedFactory<SINGLETONS_TYPE, BASE_OBJECT_TYPE>::destroy(BASE_OBJECT_TYPE *object)
{
    remove_Internal(object);
}

template <class SINGLETONS_TYPE, class BASE_OBJECT_TYPE>
void AbstractSharedFactory<SINGLETONS_TYPE, BASE_OBJECT_TYPE>::destroyAll(BASE_OBJECT_TYPE *object)
{
    jliAssertMsg(object, "Object must not be null");
    jliAssertMsg(has(object), "Object doesn't exists in the factory");
    
    s32 findIndex = index(object);
    if (findIndex<size())
    {
        m_ObjectList.swap( findIndex,size()-1);
        m_ObjectList.pop_back();
    }
    
    m_ObjectDuplicateMap.remove(btHashPtr(object));
}

template <class SINGLETONS_TYPE, class BASE_OBJECT_TYPE>
void AbstractSharedFactory<SINGLETONS_TYPE, BASE_OBJECT_TYPE>::destroyAll()
{
    while(size() > 0)
        m_ObjectList.pop_back();
    m_ObjectDuplicateMap.clear();
}

template <class SINGLETONS_TYPE, class BASE_OBJECT_TYPE>
s32 AbstractSharedFactory<SINGLETONS_TYPE, BASE_OBJECT_TYPE>::size()
{
    return m_ObjectList.size();
}

template <class SINGLETONS_TYPE, class BASE_OBJECT_TYPE>
s32 AbstractSharedFactory<SINGLETONS_TYPE, BASE_OBJECT_TYPE>::instances(const u32 index)
{
    if(index < m_ObjectList.size())
    {
        BASE_OBJECT_TYPE *object = get(index);
        
        jliAssertMsg(object, "Object must not be null");
        jliAssertMsg(has(object), "Object doesn't exists in the factory");
        
        return *m_ObjectDuplicateMap.find(btHashPtr(object));
    }
    return 0;
}

template <class SINGLETONS_TYPE, class BASE_OBJECT_TYPE>
void AbstractSharedFactory<SINGLETONS_TYPE, BASE_OBJECT_TYPE>::getAll(btAlignedObjectArray<BASE_OBJECT_TYPE*> &objects)const
{
    objects = m_ObjectList;
}

template <class SINGLETONS_TYPE, class BASE_OBJECT_TYPE>
s32 AbstractSharedFactory<SINGLETONS_TYPE, BASE_OBJECT_TYPE>::index(BASE_OBJECT_TYPE *object)const
{
    jliAssertMsg(object, "object is null");
    
    return m_ObjectList.findLinearSearch(object);
}

template <class SINGLETONS_TYPE, class BASE_OBJECT_TYPE>
BASE_OBJECT_TYPE *AbstractSharedFactory<SINGLETONS_TYPE, BASE_OBJECT_TYPE>::get(const u32 index)const
{
    jliAssertMsg(index < m_ObjectList.size(), "index must be smaller than the size of the array");
    
    return m_ObjectList.at(index);
}

//###################################################################################################

template <class SINGLETONS_TYPE, class BASE_OBJECT_TYPE>
AbstractSharedFactory<SINGLETONS_TYPE, BASE_OBJECT_TYPE>::AbstractSharedFactory()
{
}

template <class SINGLETONS_TYPE, class BASE_OBJECT_TYPE>
AbstractSharedFactory<SINGLETONS_TYPE, BASE_OBJECT_TYPE>::~AbstractSharedFactory()
{
    jliAssertMsg(size() == 0, "AbstractSharedFactory is not empty.");
}

template <class SINGLETONS_TYPE, class BASE_OBJECT_TYPE>
BASE_OBJECT_TYPE *AbstractSharedFactory<SINGLETONS_TYPE, BASE_OBJECT_TYPE>::create_Internal(const AbstractBuilder &builder)
{
    BASE_OBJECT_TYPE *object = ctor(builder);
    jliAssertMsg(object, "object is null");
    
    jliAssertMsg(!has(object), "Object already exists in the factory");
    
    m_ObjectList.push_back(object);
    m_ObjectDuplicateMap.insert(btHashPtr(object), 1);
    
    return object;
}


template <class SINGLETONS_TYPE, class BASE_OBJECT_TYPE>
BASE_OBJECT_TYPE *AbstractSharedFactory<SINGLETONS_TYPE, BASE_OBJECT_TYPE>::clone_Internal(const BASE_OBJECT_TYPE &object)
{
    BASE_OBJECT_TYPE *_object = const_cast<BASE_OBJECT_TYPE*>(&object);
    
    s32 index = this->index(_object);
    
    s32 count = *m_ObjectDuplicateMap.find(btHashPtr(_object));
    if(count > 0)
    {
        m_ObjectDuplicateMap.insert(btHashPtr(_object), ++count);
        
        return get(index);
    }
    return ctor(object);
}

template <class SINGLETONS_TYPE, class BASE_OBJECT_TYPE>
void AbstractSharedFactory<SINGLETONS_TYPE, BASE_OBJECT_TYPE>::remove_Internal(BASE_OBJECT_TYPE *object)
{
    jliAssertMsg(object, "Object must not be null");
    jliAssertMsg(has(object), "Object doesn't exists in the factory");
    
    s32 count = *m_ObjectDuplicateMap.find(btHashPtr(object));
    jliAssertMsg(count > 0, "object doesn't exist in the map");
    
    m_ObjectDuplicateMap.insert(btHashPtr(object), --count);
    
    if(count <= 0)
    {
        m_ObjectDuplicateMap.remove(btHashPtr(object));
        
        s32 findIndex = index(object);
        if (findIndex<size())
        {
            m_ObjectList.swap( findIndex,size()-1);
            m_ObjectList.pop_back();
        }
    }
}

template <class SINGLETONS_TYPE, class BASE_OBJECT_TYPE>
void AbstractSharedFactory<SINGLETONS_TYPE, BASE_OBJECT_TYPE>::serialize(btSerializer* serializer)
{
    for (s32 i = 0; i < m_ObjectList.size(); i++)
    {
        m_ObjectList[i]->serializeObject(serializer);
    }
}

#endif
