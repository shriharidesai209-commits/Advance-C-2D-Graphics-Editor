#ifndef GRAPHICS_H
#define GRAPHICS_H

#define ROWS 20
#define COLS 40

void initializeCanvas();
void displayCanvas();

void drawRectangle(int x, int y, int width, int height);
void drawLine(int x1, int y1, int x2, int y2);

#endif