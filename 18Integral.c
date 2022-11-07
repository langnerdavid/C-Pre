#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// function with calculates the f(x) of a 3rd grade function
float function(float a, float b, float c, float d, float x)
{
    return a * pow(x, 3) + b * pow(x, 2) + c * x + d;
}

int main()
{
    // function that integrates a function with Riemann Verfahren
    // Divide the funtion into multiple rectangles

    // get 4 parameters from the equation
    // ax^3 + bx^2 + cx + d = 0
    float a, b, c, d;

    // init the borders
    float x1, x2;

    // init the area and the width of the rectangles
    float width, area = 0;

    // get the values of the parameters

    printf("Give the 3 Parameters from the quadratic equation\n");
    printf("ax^3 + bx^2 + cx + d \n");

    // prompt the user for a function
    printf("a: ");
    scanf("%f", &a);
    printf("b: ");
    scanf("%f", &b);
    printf("c: ");
    scanf("%f", &c);
    printf("d: ");
    scanf("%f", &d);

    // prompt the user for the borders
    printf("Enter left border: ");
    scanf("%f", &x1);
    printf("Enter right border: ");
    scanf("%f", &x2);

    // prompt user for the width of the rectangles
    printf("Width of the rectangles: ");
    scanf("%f", &width);

    // calculate the area

    do
    {
        area += width * function(a, b, c, d, x1);
        x1 += width;
    } while (x1 < x2);

    // print out the result
    printf("Area: %f\n", area);
}