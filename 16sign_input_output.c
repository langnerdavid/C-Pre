#include <stdio.h>
int main()
{
    // program that takes on char as input and outputs it afterwards
    int c;
    printf("Bitte eine Zeichenfolge eingeben, Abschluss mit Strg+z (windows) and control+d (mac): ");
    c = getchar();   // Eingabe von der Konsole (stdin)
    while (c != EOF) // EOF resultiert aus Eingabe von Strg+z or control+d with mac
    {
        putchar(c); // Ausgabe am Bildschirm (stdout)
        c = getchar();
    }
    return 0;
}