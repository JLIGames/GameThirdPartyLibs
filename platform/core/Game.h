#include <vector>
#include "DeviceTouch.h"
#include "btAlignedObjectArray.h"

bool create();
void resize(int x, int y, int width, int height);
void update(float step);
void render();
void destroy();
//void pause();
//void unpause();

//TODO import bullet library and pass btVector2
void touch_down(jli::DeviceTouch *m_CurrentTouches[10]);
void touch_up(jli::DeviceTouch *m_CurrentTouches[10]);
void touch_move(jli::DeviceTouch *m_CurrentTouches[10]);
void touch_cancelled(jli::DeviceTouch *m_CurrentTouches[10]);
