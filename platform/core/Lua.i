//Lua interface file

//%module JLI

//%import "../../jli_game_engine/src/Lua/Lua.i"
//%import "../../bullet/Lua.i"

%ignore operator std::string;

%{
//    #include "Util.h"
    #include "DeviceTouch.h"
    using namespace jli;
%}

//#include "Util.h"
#include "DeviceTouch.h"


%extend jli::DeviceTouch
{
    const char *__str__()
    {
        std::string s(*self);
        static char tmp[1024];
        sprintf(tmp,"%s", s.c_str());
        return tmp;
    }
};