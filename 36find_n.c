#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
{
    // examine this string and print out the position of every n
    char string[] = "Dieser String soll nun durchsucht werden.";

    for (int i = 0; i < strlen(string); i++)
    {
        if (string[i] == 'n')
        {
            printf("%d\n", i);
        }
    }
}