#include <stdio.h>
#include <math.h>
#include <string.h>

int main()
{
    // init file var
    FILE *file;

    // read in the file config.dat
    file = fopen("config.dat", "r");

    // array to store key value pair
    char key[100] = {};

    int value;

    // scan the data and put the key value pairs in the array
    for (int i = 0; i < 4; i++)
    {
        fscanf(file, "%99s %d", key[i], &value);
    }

    // close the file
    fclose(file);

    for (int i = 0; i < 4; i++)
    {
        printf("%s\n", key);
    }
    return 0;
}