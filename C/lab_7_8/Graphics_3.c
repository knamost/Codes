// Write a program to draw a circle in C.

#include <stdio.h>
#include <graphics.h>

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, NULL);

    // Draw a circle with center (200, 200) and radius 100
    circle(200, 200, 100);

    getch(); // Wait for user input before closing
    closegraph();
    return 0;
}