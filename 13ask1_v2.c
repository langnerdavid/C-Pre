#include <stdio.h>
#include <math.h>

int main()
{
    // program that does the same as 13ask1.c but with switsch statements
    // the programm converts angle values into radian sin/cos/tan values

    // initialize variables
    char zeichen;
    double grad, bogen;

    // prompt the user to enter the angle
    printf("Winkel in [°] eingeben: ");
    scanf("%lf", &grad);

    // prompt the user to enter wether to convert the angle into sin/cos/tan values
    printf("s = Sinus, c = Cosinus, t = Tangens -> ");
    scanf(" %c", &zeichen);

    // calculate radian
    bogen = grad * M_PI / 180; // Bogenmaß berechnen

    //  switch statements
    switch (zeichen)
    {
    case 's':
    {
        printf("Sin(%lf) = %lf\n", grad, sin(bogen));
        break;
    }
    case 't':
    {
        printf("Tan(%lf) = %lf\n", grad, tan(bogen));
        break;
    }
    case 'c':
    {
        printf("Cos(%lf) = %lf\n", grad, cos(bogen));
        break;
    }
    default:
    {
        printf("Kein Kennbuchstabe s c t.\n");
    }
    }
}