#include <stdio.h>
#include <math.h>

// returns the value of a function
// e^(-t^2)
float func(float t)
{
    return exp(-1.0 * pow(t, 2));
}

int main()
{
    // init vars
    float t, area, increment;

    // prompt the user to enter the increment accuracy
    printf("Enter the increment accuracy: ");
    scanf("%f", &increment);

    do
    {
        // debug prints
        printf("A(x): %f x: %f\n", area, t);

        // calc the area and it to the existent area
        area += ((func(t) + func(t + increment)) * 0.5) * increment;

        // increment the left t value
        t += increment;

        // print out the results
        printf("Area: %f x: %f\n", area, t);
    } while (t <= 2);
}