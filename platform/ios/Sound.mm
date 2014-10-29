#include "Sound.h"

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
    
}

void Sound::update()
{
    FMOD_RESULT result = m_System->update();
}