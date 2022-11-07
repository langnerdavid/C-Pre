#include <stdio.h>

// fibonacci function
// a_1 = 1
// a_2 = 1
//  a_n = a_{n-1} + a_{n-2}
int calc_fibonnaci(int n)
{
    if (n == 1 || n == 2)
        return 1;
    else if (n > 2)
        return calc_fibonnaci(n - 1) + calc_fibonnaci(n - 2);
    else
        return 0;
}

int main()
{
    // init vars
    int n;

    // prompt user which fibonacci number to calculate
    printf("Which fibonacci number do you want to calculate: ");
    scanf("%d", &n);

    // calc the fibonacci number
    int a = calc_fibonnaci(n);

    // print out the result
    printf("%d\n", a);
    return 0;
}
