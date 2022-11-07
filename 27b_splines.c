#include <stdio.h>
#include <math.h>

// programm that calculates b splines
// of the order n and position x
double calc_b_splines(int n, double x)
{
    double value;
    if (n == 0)
    {
        if (x >= 0 && x < 1)
        {
            value = 1.0;
        }
        else
        {
            value = 0.0;
        }
    }
    else
    {
        double fracture = (n + 1 - x) / (n);
        double fracture2 = (x / n);
        //

        value = (fracture * calc_b_splines(n - 1, x - 1) + fracture2 * calc_b_splines(n - 1, x));
    }
    return value;
}

int main()
{
    // init vars
    double x;
    int n;
    // prompt the user to input order n and position x
    printf("Bitte geben sie Ordnung und X-wert ein: \n");
    printf("n: ");
    scanf("%d", &n);
    printf("x: ");
    scanf("%lf", &x);

    // calc the result and store the result in a var
    double res = calc_b_splines(n, x);
    printf("Result: %lf\n", res);
}