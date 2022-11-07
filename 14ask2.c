#include <stdio.h>
int main()
{
    // program to test the switsch statements)
    int zensur;

    // prompt the user for the grade
    printf("Enter a grade: ");
    scanf("%d", &zensur);

    switch (zensur)
    {
    case 1:; // Semikolon ist hier eine Leeranweisung
    case 2:
    {
        printf("Einstellen\n");
        break;
    }
    case 3:
    {
        printf("Gespräch\n");
        break;
    }
    case 4:
    {
        printf("Zusatzprüfung\n");
        break;
    }
    case 5: // Programm wird nach nächstem Label fortgesetzt.
    case 6:
    {
        printf("Nicht einstellen\n");
        break;
    }
    default:
        printf("Falsche  Note\n");
    }
}