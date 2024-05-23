// Write a program to draw a rectangle.

#include <stdio.h>
#include <graphics.h>

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, NULL);

    // Draw a rectangle from (100, 100) to (300, 200)
    rectangle(100, 100, 300, 200);

    getch(); // Wait for user input before closing
    closegraph();
    return 0;
}