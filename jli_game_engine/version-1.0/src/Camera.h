//
//  Camera.h
//  JLIGameEngineTest
//
//  Created by James Folk on 11/22/14.
//  Copyright (c) 2014 James Folk. All rights reserved.
//

#ifndef __JLIGameEngineTest__Camera__
#define __JLIGameEngineTest__Camera__

#include "AbstractFactoryObject.h"
#include "AbstractBuilder.h"

namespace jli
{
//    ATTRIBUTE_ALIGNED16(class) Camera:
	class Camera:
    public AbstractFactoryObject
    {
        friend class WorldFactory;
    public:
        Camera();
        Camera(const AbstractBuilder&);
        Camera(const Camera &);
//        BT_DECLARE_ALIGNED_ALLOCATOR();
        virtual ~Camera();
        Camera &operator=(const Camera &);
        
        virtual	s32	calculateSerializeBufferSize() const;
        virtual	void serialize(void*, btSerializer*) const;
        
        virtual const char *getClassName()const;
        virtual u32 getType()const;
        operator std::string() const;
        
        //TODO: fill in specific methods for Camera
        
        void render();
    protected:
    private:
    };
}

#endif /* defined(__JLIGameEngineTest__Camera__) */
