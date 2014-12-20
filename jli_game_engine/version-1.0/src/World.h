//
//  World.h
//  JLIGameEngineTest
//
//  Created by James Folk on 11/21/14.
//  Copyright (c) 2014 James Folk. All rights reserved.
//

#ifndef __JLIGameEngineTest__World__
#define __JLIGameEngineTest__World__

#include <cstddef>
#include "Util.h"

#include "btAlignedObjectArray.h"
#include "WorldFactory.h"
#include "WorldMySQL.h"
#include "WorldSound.h"
#include "WorldLuaVirtualMachine.h"
#include "Clock.h"
#include "WorldStateMachine.h"
#include "WorldState.h"
#include "Camera.h"

#include <string>

namespace jli
{
    class World
    {
    public:
        static void createInstance();
        static void destroyInstance();
        static World *const getInstance();
        static bool hasInstance();
        
    private:
        World();
        virtual ~World();
        
    public:
        /**
         *  The is the central place to create all of the objects in the game.
         *
         *  @return The pointer to the world factory singleton.
         */
        WorldFactory *const getWorldFactory()const;
        
        /**
         *  This is the central place to load assets from disk.
         *
         *  @return The pointer to the world mySQL singleton
         */
        WorldMySQL *const getWorldMySQL()const;
        
        /**
         *  This is the central place for sounds of the game.
         *
         *  @return The pointer to the world's sound control.
         */
        WorldSound *const getWorldSound()const;
        
        /**
         *  This is the central place for the Lua Virtual Machine.
         *
         *  @return The pointer to the world's lua virtual machine.
         */
        WorldLuaVirtualMachine *const getWorldLuaVirtualMachine()const;
        
        /**
         *  This is the central place for the Time Keeping element of the game.
         *
         *  @return The pointer to the world's time.
         */
        Clock *const getWorldClock()const;
        
        /**
         *  push a WorldState to the World
         *
         *  @param WorldState The current state of the world
         */
        void pushState(WorldState *);
        
        void touchDown(DeviceTouch *m_CurrentTouches[10]);
        void touchUp(DeviceTouch *m_CurrentTouches[10]);
        void touchMove(DeviceTouch *m_CurrentTouches[10]);
        void touchCancelled(DeviceTouch *m_CurrentTouches[10]);
        
        /**
         *  Add a camera to the world
         *
         *  @param Camera the camera to add
         */
        void addCamera(Camera *);
        
        /**
         *  Remove a camera from the world
         *
         *  @param Camera the camera to remove
         */
        void removeCamera(Camera *);
        
        /**
         *  Update the world
         *
         *  @param timeStep the time step of the world
         */
        void update(f32 timeStep);
        
        /**
         *  Render the world.
         */
        void render();
        
        /**
         *  The Name of this world
         *
         *  @param name the name to set to this world.
         */
        void setName(const char *name);
        
        /**
         *  The Name of this world
         *
         *  @return the name of this world.
         */
        const char *getName()const;
        
        operator std::string() const;
    protected:
    private:
        World(const World &);
        World &operator=(const World &);
        static World *s_Instance;
        
        WorldFactory *m_WorldFactory;
        WorldMySQL *m_WorldMySQL;
        WorldSound *m_WorldSound;
        WorldLuaVirtualMachine *m_WorldLuaVirtualMachine;
        Clock *m_worldClock;
        WorldStateMachine *m_stateMachine;
        btAlignedObjectArray<Camera*> m_cameraArray;
        
        std::string m_Name;
    };
}




#endif /* defined(__JLIGameEngineTest__World__) */
