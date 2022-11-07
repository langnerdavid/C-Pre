#include <stdio.h>
#include <math.h>
#include <stdlib.h>

// function with calculates the f(x) of a 3rd grade function
float function(float a, float b, float c, float d, float x)
{
    return a * pow(x, 3) + b * pow(x, 2) + c * x + d;
}

int main()
{
    // programm that writes an algorithmn to calculate zeropoints

    // get 4 parameters from the equation
    // ax^3 + bx^2 + cx + d = 0
    float a, b, c, d;

    // init the two zeropoints
    float x1 = 0, x2 = 0;

    // temp x value
    float x;

    // acuracy
    float acc;

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

    // prompt the user for the accurary with wich the zeropoints are getting calculated
    printf("Accuracy: ");
    scanf("%f", &acc);

    // get the starting borders x1/x2
    // f(x1)<0 and f(x2)>0
    while (function(a, b, c, d, x1) >= 0)
    {
        x1 -= 1;
    }
    while (function(a, b, c, d, x2) <= 0)
    {
        x2 += 1;
    }
    // starting borders haven been made

    // now move the borders closer together until you have the zeropoint with an accuracy of acc
    do
    {
        // calculate temp x and look if its in the acc range
        x = x1 - function(a, b, c, d, x1) * ((x2 - x1) / (function(a, b, c, d, x2) - function(a, b, c, d, x1)));
        if (function(a, b, c, d, x) > 0)
        {
            x2 = x;
        }
        else if (function(a, b, c, d, x) < 0)
        {
            x1 = x;
        }

        // print out the process
        printf("x: %f x1: %f x2: %f\n", x, x1, x2);
    } while (fabs(function(a, b, c, d, x)) > acc);

    // print out the final value of x and where the zeropoint is
    printf("Zeropoint with accuracy of %f:  x: %f\n", acc, x);
}