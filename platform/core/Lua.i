//Lua interface file

%{
    #include "DeviceTouch.h"
%}

#include "DeviceTouch.h"

%template(DeviceTouchArray) btAlignedObjectArray<jli::DeviceTouch>;

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