#include <stdio.h>
#include <math.h>

float function(float a, float b, float c, float d, float x)
{
    return a * pow(x, 3) + b * pow(x, 2) + c * x + d;
}

int main()
{
    // print x and f(x) values into a file
    FILE *file;

    // open file in write mode
    file = fopen("function.txt", "a");

    // check if file could be opened
    if (file == NULL)
    {
        printf("error opening file\n");
        return -1;
    }

    // asks the user for x value
    float x;
    printf("Enter x value: ");
    scanf("%f", &x);

    // print the content to the file
    fprintf(file, "f(x) = %f\n", function(1, 1, 1, 1, x));

    // close the file
    fclose(file);
}