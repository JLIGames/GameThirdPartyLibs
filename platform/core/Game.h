#include <vector>

bool create();
void resize(int x, int y, int width, int height);
void update(float step);
void render();
void destroy();
//void pause();
//void unpause();

//TODO import bullet library and pass btVector2
void touch_down();
void touch_up();
void touch_move();
void touch_cancelled();
