#include "AbstractSingleton.h"

#ifdef __EMSCRIPTEN__
//TODO include OpenAL
#else
#include "fmod.hpp"
#include "fmod_errors.h"
#endif

class Sound : public AbstractSingleton<Sound>
{
public:
    Sound();
    ~Sound();

    void update();
    
    
private:
#ifdef __EMSCRIPTEN__
    //TODO include OpenAL
#else
    FMOD::System   *m_System;
#endif
};
