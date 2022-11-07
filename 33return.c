#include <stdio.h>

int main()
{
    int a;
    char c;
    printf("Ganze Zahl eingeben: ");
    scanf("%d", &a);
    printf("Die Zahl lautet: %d\n", a);
    printf("Einzelnes Zeichen eingeben: ");
    scanf(" %c", &c);
    printf("Das Zeichen lautet: %d\n", c);
    return 0;
}
