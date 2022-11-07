#include <stdio.h>
#include <math.h>
#include <stdbool.h>

int main()
{
    printf("%c\n", (true || false) ? 't' : 'f');
    printf("%d\n", 1024 >> 8);
    printf("%d\n", 3 << 6);
    printf("%d\n", 0x3 & 0x1);
    printf("%d\n", 0x4 | 0x1);
    printf("%d\n", 7 > 9 && false);
    printf("%d\n", true || 3 > 8);
}