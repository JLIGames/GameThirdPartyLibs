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
void touch_down(const btAlignedObjectArray<jli::DeviceTouch*> &touchArray);
void touch_up(const btAlignedObjectArray<jli::DeviceTouch*> &touchArray);
void touch_move(const btAlignedObjectArray<jli::DeviceTouch*> &touchArray);
void touch_cancelled(const btAlignedObjectArray<jli::DeviceTouch*> &touchArray);
