#include <stdio.h>
#include "graphics.h"

int main()
{
    int choice;

    initializeCanvas();

    while(1)
    {
        printf("\n");
        printf("===== 2D GRAPHICS EDITOR =====\n");
        printf("1. Draw Rectangle\n");
        printf("2. Draw Line\n");
        printf("3. Draw Triangle\n");
        printf("4. Draw Circle\n");
        printf("5. Display Canvas\n");
        printf("6. Clear Canvas\n");
        printf("7. Exit\n");

        printf("Enter choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
            {
                int x, y, width, height;

                printf("Enter x y width height: ");
                scanf("%d%d%d%d",
                      &x, &y,
                      &width, &height);

                drawRectangle(x, y, width, height);
                break;
            }

            case 2:
            {
                int x1, y1, x2, y2;

                printf("Enter x1 y1 x2 y2: ");
                scanf("%d%d%d%d",
                      &x1, &y1,
                      &x2, &y2);

                drawLine(x1, y1, x2, y2);
                break;
            }

            case 3:
            {
                int x, y, height;

                printf("Enter x y height: ");
                scanf("%d%d%d",
                      &x, &y,
                      &height);

                drawTriangle(x, y, height);
                break;
            }

            case 4:
            {
                int cx, cy, radius;

                printf("Enter centerX centerY radius: ");
                scanf("%d%d%d",
                      &cx, &cy,
                      &radius);

                drawCircle(cx, cy, radius);
                break;
            }

            case 5:
                displayCanvas();
                break;

            case 6:
                initializeCanvas();
                printf("Canvas Cleared!\n");
                break;

            case 7:
                printf("Exiting...\n");
                return 0;

            default:
                printf("Invalid Choice!\n");
        }
    }

    return 0;
}