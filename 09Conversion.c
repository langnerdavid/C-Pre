#include <stdio.h>
#include <stdbool.h>

// main function
int main()
{
    // initialize var
    char c;

    // prompt user for text input
    printf("Bitte einen Buchstaben eingeben: ");
    scanf("%c", &c);

    if ((c >= 'A') && (c <= 'Z')) // Vergleich von einfachen ASCII Zeichen
    {
        // convert Capital to lowercase
        c = 'a' + c - 'A'; // ASCII Zeichensatz angenommen
    }
    else
    {
        // convert Lower to Capital
        c = 'A' + c - 'a'; // ASCII Lower angenommen
    }

    // print out the converted letter
    printf("%c\n", c);

    return 0;
}
