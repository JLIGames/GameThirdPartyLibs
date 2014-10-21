#include "Log.h"
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>


void Log(const char *format, ...)
{
    va_list args;
    
    va_start(args, format);
    
    printf(format, args);
    
    va_end(args);
}

void LogError(const char *format, ...)
{
    va_list args;
    
    va_start(args, format);
    
    fprintf(stderr, format, args);
    
    va_end(args);
}
