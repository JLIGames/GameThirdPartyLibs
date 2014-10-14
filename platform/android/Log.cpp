#include <android/log.h>
#include <stdio.h>
#include <stdarg.h>
#include "Log.h"

void Log(const char *format, ...)
{
	va_list args;

	va_start(args, format);

	__android_log_print(ANDROID_LOG_INFO, "JLIGAMEENGINE", format, args);

	vprintf(format, args);
	va_end(args);
}

void LogError(const char *format, ...)
{
	va_list args;

	va_start(args, format);

	__android_log_print(ANDROID_LOG_ERROR, "JLIGAMEENGINE", format, args);

	vprintf(format, args);
	va_end(args);
}
