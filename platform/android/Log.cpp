#include <android/log.h>
#include <stdio.h>
#include <stdarg.h>
#include "Log.h"

//#define LOGD(LOG_TAG, ...) __android_log_print(ANDROID_LOG_DEBUG, LOG_TAG, __VA_ARGS__)
//#define LOGV(LOG_TAG, ...) __android_log_print(ANDROID_LOG_VERBOSE, LOG_TAG, __VA_ARGS__)
//#define LOGE(LOG_TAG, ...) __android_log_print(ANDROID_LOG_ERROR, LOG_TAG, __VA_ARGS__)
//#define LOGI(LOG_TAG, ...) __android_log_print(ANDROID_LOG_INFO, LOG_TAG, __VA_ARGS__)

void Log(const char *format, ...)
{
	va_list args;

	va_start(args, format);

	__android_log_print(ANDROID_LOG_INFO, "JLIGAMEENGINE", format, args);

	vprintf(format, args);
	va_end(args);


}
