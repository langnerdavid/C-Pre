#include <stdio.h>
#include <stdbool.h>

int main()
{
    // point with x & y coordinates
    // function that outputs True if point is inside a rectangle with width = 20 and height = 7
    // the left down corner is O(0/0)

    // given rectangle with given width and height
    int width = 20, height = 7;

    bool isOuterPoint;

    // initlialize x&y coordinates
    float x, y;

    // prompt user for x coordinate
    printf("Enter x-coordinate: ");
    scanf("%f", &x);

    // prompt user for y coordinate
    printf("Enter y-coordinate: ");
    scanf("%f", &y);

    // check if x&y-coordinate is inside the rectangle and store true/false in bool var
    // returns true if the coordinates are in the rectangle and false otherwise
    // y > 0 || y < height || x < width || x > 0
    isOuterPoint = ((y > 0 && y < height) && (x > 0 && x < width));

    printf("%d\n", isOuterPoint);
}