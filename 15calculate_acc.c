#include <stdio.h>
int main()
{
    // examine the mistake when you add multiple times 0.1
    double xs = 0.1, x = 0.0;
    for (int i = 0; i < 10000000; i++)
    {
        x = x + xs;
    }
    printf("% lf\n", x);
    return 0;

    // in the end you get 999999.999839 and not clean 10000000 because the numbers cant be displayed with 100% accuracy
}