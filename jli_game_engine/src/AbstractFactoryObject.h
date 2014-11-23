//
//  AbstractFactoryObject.h
//  JLIGameEngineTest
//
//  Created by James Folk on 11/9/14.
//  Copyright (c) 2014 James Folk. All rights reserved.
//

#ifndef JLIGameEngineTest_AbstractFactoryObject_h
#define JLIGameEngineTest_AbstractFactoryObject_h

#include "btAlignedObjectArray.h"

#include "AbstractObject.h"
#include "Util.h"

//#include "AbstractBuilder.h"
#include "btSerializer.h"

namespace jli
{
    class AbstractBuilder;
    class Resource;
    
    class AbstractFactoryObject :
    public AbstractObject
    {
        friend class WorldFactory;
    protected:
        AbstractFactoryObject(const void* ptr);
        
        virtual ~AbstractFactoryObject();
        
    public:
        /**
         *  The name of this Class
         *
         *  @return the name of this class
         */
        virtual const char *getName()const;
        
        /**
         *  The type of this Class
         *
         *  @return the type of this class
         */
        virtual u32 getType()const;
        
        /**
         *  Creates an object. This is the central place where all of the objects will be created in the world
         *
         *  @param builder The builder class to construct the instance from.
         *
         *  @return a new instance based on the builder's type.
         */
        virtual AbstractFactoryObject *create(const AbstractBuilder &builder)const;
        
        /**
         *  Clones an object. It is possible to share the instance.
         *
         *  @param shared used to determine whether or not to create a shared object
         *
         *  @return a clone of the original object or another instance.
         */
        virtual AbstractFactoryObject *clone(bool shared = false)const;
        
        /**
         *  used to destroy this instance from the factory.
         */
        virtual void destroy();
        
        /**
         *  function is used to calculate the buffer size of this object.
         *
         *  @return the buffer size of this object.
         */
        virtual	s32	calculateSerializeBufferSize() const = 0;
        
        /**
         *  Abstract function which needs to be implemented by the base class.  This can be used to save the current state of the object to disk.
         *
         *  @param dataBuffer The buffer to store the data when it is finished serializing.
         *  @param serializer The pointer to the serializer.
         */
        virtual	void serialize(void* dataBuffer, btSerializer* serializer) const = 0;
        
        /**
         *  The pointer stored by this class.
         */
        const void*	getPointer() const;
        
        /**
         *  The u64 value of this pointer;
         *
         *  @return the u64 value of this pointer.
         */
        const u64 getPointerValue() const;
        
        bool operator==(const AbstractFactoryObject &rhs)const;
        
        bool operator<(const AbstractFactoryObject &rhs)const;
        
        bool operator>(const AbstractFactoryObject &rhs)const;
        
        bool operator!=(const AbstractFactoryObject &rhs)const;
        
        bool operator<=(const AbstractFactoryObject &rhs)const;
        
        bool operator>=(const AbstractFactoryObject &rhs)const;
        
        virtual void serializeObject(class btSerializer* serializer) const;
    private:
        AbstractFactoryObject();
        AbstractFactoryObject(const AbstractFactoryObject&);
        AbstractFactoryObject &operator=(const AbstractFactoryObject&);
        union
        {
            const void*	m_pointer;
            u64 m_pointerVal;
        };
    };
}


#endif
