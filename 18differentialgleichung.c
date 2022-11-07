#include <stdio.h>
#include <math.h>

int main()
{
    // Program that solves differential equatios with the euler process
    // y'(t)= f(y(t), t)

    // prompt the user to enter starting values
    // t0 y0 and dt and t_end
    float t0, y0, dt, t_end, func, dy;
    printf("Enter Starting values: \n");
    printf("t0: ");
    scanf("%f", &t0);
    printf("y0: ");
    scanf("%f", &y0);
    printf("dt: ");
    scanf("%f", &dt);
    printf("t_end: ");
    scanf("%f", &t_end);

    do
    {
        // calculate
        // 0,5 * y(t)

        func = y0 * 0.5;
        dy = func * dt;

        // upgrade t and y values
        y0 += dy;
        t0 += dt;

        // prints out the results until t_end is reached
        printf("t_n: %f, y_n: %f, f(y_n, t_n): %f, dy -> (%f * %f): %f\n", t0, y0, func, func, dt, dy);
        printf("Result: y: %f\n", y0);
    } while (t0 < t_end);
}