#include <math.h>
#include <stdlib.h>
#include <stdio.h>

int main()
{
    // prompts the user to enter n different values and calculates the average
    // n = how many numbers the user ha to input
    // ask user how many numbers
    int n;
    printf("How man numbers do you want to enter: ");
    scanf("%d", &n);

    // init the total
    int total;

    // temp number the user entered
    int temp;

    // malloc storage for array
    int *arr = (int *)malloc(sizeof(int) * n);

    for (int i = 0; i < n; i++)
    {
        printf("Enter a number: ");
        scanf("%d", &temp);

        // add number to total and to the array
        arr[i] = temp;
        total += temp;
    }

    // print out the array
    /*for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }*/

    // calculate the average
    float average = total / n;
    printf("Average: %f\n", average);

    // free memory and set pointer NULL
    free(arr);
    arr = NULL;
    return 0;
}