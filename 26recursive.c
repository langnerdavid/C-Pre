#include <stdio.h>
#include <math.h>

// func that counts down from the int given and prints the int out at every round
double funct(double x)
{
    printf("%lf\n", x);
    if (x > 0)
    {
        x -= 1.0;
        return funct(x);
    }
    else
        return x;
}

int main()
{
    funct(4);
}