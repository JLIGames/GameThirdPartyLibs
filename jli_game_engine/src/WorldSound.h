//
//  WorldSound.h
//  JLIGameEngineTest
//
//  Created by James Folk on 11/22/14.
//  Copyright (c) 2014 James Folk. All rights reserved.
//

#ifndef __JLIGameEngineTest__WorldSound__
#define __JLIGameEngineTest__WorldSound__

#include <string>

namespace jli
{
    class WorldSound
    {
    public:
        WorldSound();
        virtual ~WorldSound();
        
        operator std::string() const;
        
        //TODO: fill in specific methods for WorldSound
    protected:
    private:
        WorldSound(const WorldSound &);
        WorldSound &operator=(const WorldSound &);
    };
}

#endif /* defined(__JLIGameEngineTest__WorldSound__) */
