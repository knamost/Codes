// Write a program in C to draw a line.

#include <stdio.h>
#include <winbgim.h>

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, NULL);

    // Draw a line from (50, 50) to (200, 200)
    line(50, 50, 200, 200);

    getch(); // Wait for user input before closing
    closegraph();
    return 0;
}