#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    // init variables
    char c;
    do
    {
        // code
        printf("Zeichen eingeben: ");
    } while (scanf(" %c", &c) != EOF);

    rewind(stdin);
}