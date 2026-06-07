#include "graphics.h"

int main()
{
    initializeCanvas();
    drawRectangle(5, 5, 10, 6);
    drawLine(20, 2, 30, 2);
    displayCanvas();

    return 0;
}