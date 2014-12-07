//Lua interface file
/* File: Lua.i */

//#define SWIG_RUNTIME_VERSION
//#define SWIG_TYPE_TABLE "_JLIENGINE_"

%module JLI



//%include "OpenAL.i"



%include <lua/factory.i>
%include <lua/stl.i>
%include <lua/lua_fnptr.i>

%import "../../../bullet/Lua.i"


%import "OpenGLES20.i"
%import "FMOD.i"

%import "AbstractBehavior.i"
%import "AbstractDecorator.i"
%import "AbstractFactoryObject.i"
%import "AbstractObject.i"
%import "AbstractPhysicsBody.i"
%import "AbstractState.i"
%import "AbstractStateMachine.i"

%insert("runtime")

%{
    #include "JLIEngine.h"
%}

#include "JLIEngine.h"

%template(NodeState)  AbstractState< Node >;
%template(NodeStateMachine) AbstractStateMachine< Node >;

%template(SceneState)  AbstractState< Scene >;
%template(SceneStateMachine) AbstractStateMachine< Scene >;

%template(WorldState)  AbstractState< World >;
%template(WorldStateMachine) AbstractStateMachine< void >;

