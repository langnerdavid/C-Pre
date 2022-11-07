#include <stdio.h>
#include <stdbool.h>
#include <math.h>

// force stack overflow
int main()
{
    // declare an array with 100 entries
    int arr[100];

    // init the array
    for (int i = 0; i < 100; i++)
    {
        arr[i] = i;
    }

    // print the element after the last element
    printf("%d\n", arr[100]);

    return 0;
}