#include <stdio.h>
#include <math.h>

// main function
int main()
{
    // get 3 parameters from quadratic equation
    // ax^2 + bx + cx = 0
    float a, b, c, discriminante;

    // init the two zeropoints
    float x1, x2;

    printf("Give the 3 Parameters from the quadratic equation\n");
    printf("ax^2 + bx + cx = 0 \n");

    // prompt the user for a
    printf("Coefficient a: ");
    scanf("%f", &a);

    // prompt the user for b
    printf("Coefficient b: ");
    scanf("%f", &b);

    // prompt the user for c
    printf("Coefficient c: ");
    scanf("%f", &c);

    // if it isnt a quadratic equation but a linear equation than return 0
    if (a == 0)
    {
        return 0;
    }

    // calculate discriminante
    discriminante = b * b - 4 * a * c;

    // print out the number of zeropoints
    if (discriminante < 0)
    {
        printf("Discriminante is negative -> 0 zeropoints\n");
    }
    else if (discriminante > 0)
    {
        // if there are 2 zeropoints then calculate each on of them individually
        // and print them out
        printf("Discriminante is positive -> 2 zeropoints\n");
        x1 = ((-b) + sqrt(discriminante)) / (2 * a);
        x2 = ((-b) - sqrt(discriminante)) / (2 * a);
        printf("The two zeropoints are at x1= %f and at x2 = %f\n", x1, x2);
    }
    else
    {
        // if there is only one zeropoint then calcute that and print out the single zeropoint
        printf("Discriminante is zero -> 1 zeropoint\n");
        x1 = (-b) / (2 * a);
        printf("The zeropoint is at position x1 = %f\n", x1);
    }
}