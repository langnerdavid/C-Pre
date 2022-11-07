#include <stdio.h>
#include <math.h>

int main()
{
    float dt, tEnd;
    double t, y, dy;

    float frequency = 1000;
    float resistor = 1000;
    float capacitor = 1.0e-6;
    float omega = 2.0 * M_PI * frequency;

    t = 0.0;

    y = 0.0;
    dt = 1.0e-4;
    tEnd = 0.01;

    while (t < tEnd)
    {
        dy = 1.0 / resistor / capacitor * (sin(omega * t) - y) * dt;
        y = y + dy;
        t = t + dt;

        printf("%lf\t%lf\n", t, y);
    }

    return 0;
}