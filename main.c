#include "graphics.h"

int main()
{
    initializeCanvas();
    drawRectangle(5, 5, 10, 6);
    drawLine(20, 2, 30, 2);
    drawTriangle(30, 10, 5);
    drawCircle(15, 15, 3);
    displayCanvas();

    return 0;
}