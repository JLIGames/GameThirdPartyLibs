//
//  AbstractSingleton.h
//  JLIGameEngineTest
//
//  Created by James Folk on 10/28/14.
//  Copyright (c) 2014 James Folk. All rights reserved.
//

#ifndef JLIGameEngineTest_AbstractSingleton_h
#define JLIGameEngineTest_AbstractSingleton_h

#include <assert.h>
#include <cstddef>

template <class SINGLETONS_TYPE>
class AbstractSingleton
{
public:
    static void createInstance()
    {
        if(NULL == s_Instance)
        {
            s_Instance = new SINGLETONS_TYPE();
        }
    }
    
    static void destroyInstance()
    {
        delete s_Instance;
        s_Instance = NULL;
    }
    
    static SINGLETONS_TYPE *const getInstance()
    {
        assert(s_Instance);
        
        return s_Instance;
    }
    
    static bool hasInstance()
    {
        return (NULL != s_Instance);
    }
protected:
    AbstractSingleton(){}
    virtual ~AbstractSingleton(){}
private:
    AbstractSingleton(const AbstractSingleton &rhs);
    AbstractSingleton &operator=(const AbstractSingleton &rhs);
    
    static SINGLETONS_TYPE *s_Instance;
};

template <class SINGLETONS_TYPE>
SINGLETONS_TYPE *AbstractSingleton<SINGLETONS_TYPE>::s_Instance = NULL;

#endif
