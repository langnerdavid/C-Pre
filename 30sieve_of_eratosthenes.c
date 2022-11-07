#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

// program that simulates the Sieve of Eratosthenes
int main()
{
    // calculates every prime number until you reach the number N
    int n = 10;

    // init the array
    int *arr = (int *)malloc((sizeof(int) * n) - 1);

    // write every number from 2 to N in an array
    for (int i = 0; i <= n - 2; i++)
    {
        arr[i] = i + 2;
    }

    // if the number is even set it to zero
    for (int i = 0; i <= n - 2; i++)
    {
        if (arr[i] % 2 == 0)
        {
            arr[i] = 0;
        }
    }

    // go to the first prime number and make every number 0 that is multiple of it
    

    // print out the array
    for (int i = 0; i <= n - 2; i++)
    {
        if (arr[i] != 0)
        {
            printf("%d ", arr[i]);
        }
    }
    // free the array and set pointer to NULL
    free(arr);
    arr = NULL;

    return 0;
}