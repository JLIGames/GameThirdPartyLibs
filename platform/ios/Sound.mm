#include "Sound.h"
#include "Log.h"

void ERRCHECK_fn(FMOD_RESULT result, const char *file, int line)
{
    if (result != FMOD_OK)
    {
        LogError("%s(%d): FMOD error %d - %s", file, line, result, FMOD_ErrorString(result));
    }
}
#define ERRCHECK(_result) ERRCHECK_fn(_result, __FILE__, __LINE__)

Sound::Sound()
{
    FMOD_RESULT   result        = FMOD_OK;
    unsigned int  version       = 0;
    
    result = FMOD::System_Create(&m_System);
    result = m_System->getVersion(&version);
    result = m_System->init(100, FMOD_INIT_NORMAL | FMOD_INIT_PROFILE_ENABLE, 0);
}
Sound::~Sound()
{
    FMOD_RESULT   result        = FMOD_OK;
    
    result = m_System->close();
    ERRCHECK(result);
    result = m_System->release();
    ERRCHECK(result);
}

void Sound::update()
{
    FMOD_RESULT result = m_System->update();
    ERRCHECK(result);
}