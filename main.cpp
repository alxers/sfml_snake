#include <SFML/Graphics.hpp>
#include "Window.h"

int main()
{  
    Window w("test", {640, 480});
    w.startDraw();
    w.endDraw();

    return 0;
}