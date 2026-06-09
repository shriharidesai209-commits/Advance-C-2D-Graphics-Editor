#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "graphics.h"

char canvas[ROWS][COLS];

void initializeCanvas()
{
    int i, j;

    for(i = 0; i < ROWS; i++)
    {
        for(j = 0; j < COLS; j++)
        {
            canvas[i][j] = '_';
        }
    }
}

void displayCanvas()
{
    int i, j;

    for(i = 0; i < ROWS; i++)
    {
        for(j = 0; j < COLS; j++)
        {
            printf("%c", canvas[i][j]);
        }
        printf("\n");
    }
}

void drawRectangle(int x, int y, int width, int height)
{
    int i, j;

    for(i = y; i < y + height; i++)
    {
        for(j = x; j < x + width; j++)
        {
            if(i == y || i == y + height - 1 ||
               j == x || j == x + width - 1)
            {
                canvas[i][j] = '*';
            }
        }
    }
}

void drawLine(int x1, int y1, int x2, int y2)
{
    int i;

    if(y1 == y2)
    {
        for(i = x1; i <= x2; i++)
        {
            canvas[y1][i] = '*';
        }
    }
    else if(x1 == x2)
    {
        for(i = y1; i <= y2; i++)
        {
            canvas[i][x1] = '*';
        }
    }
}

void drawTriangle(int x, int y, int height)
{
    int i, j;

    for(i = 0; i < height; i++)
    {
        canvas[y + i][x - i] = '*';
        canvas[y + i][x + i] = '*';
    }

    for(j = x - height + 1; j <= x + height - 1; j++)
    {
        canvas[y + height - 1][j] = '*';
    }
}

void drawCircle(int cx, int cy, int radius)
{
    int x, y;

    for(y = 0; y < ROWS; y++)
    {
        for(x = 0; x < COLS; x++)
        {
            int value =
                (x - cx) * (x - cx) +
                (y - cy) * (y - cy);

            if(abs(value - radius * radius) <= radius)
            {
                canvas[y][x] = '*';
            }
        }
    }
}