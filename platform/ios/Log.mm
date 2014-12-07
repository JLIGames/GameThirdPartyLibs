#include "Log.h"
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>

#import <Foundation/Foundation.h>

void Log(const char *format, ...)
{
    va_list args;
    
    va_start(args, format);
    
    NSLogv([NSString stringWithUTF8String:format], args);
//    char *buffer = new char[2048];
//    sprintf(buffer, format, args);
    
//    printf(format, args);
//    NSLog([NSString stringWithUTF8String:format], args);
    
    va_end(args);
}

void LogError(const char *format, ...)
{
    va_list args;
    
    va_start(args, format);
    
    fprintf(stderr, format, args);
    
    va_end(args);
}
