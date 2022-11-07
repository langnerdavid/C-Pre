#include <stdio.h>
int main()
{
    // program counts how many chars you entered into the console
    long nc = 0;
    printf("Bitte eine Zeichenfolge eingeben, Abschluss mit Strg+z oder control+d:");
    while (getchar() != EOF) // EOF resultiert aus Eingabe von Strg+z oder control+d
        nc = nc + 1;
    printf("%ld\n", nc - 1);
    return 0;
}
