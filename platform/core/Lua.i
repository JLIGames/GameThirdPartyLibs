//Lua interface file

%{
    #include "Util.h"
    #include "DeviceTouch.h"
%}

#include "Util.h"
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