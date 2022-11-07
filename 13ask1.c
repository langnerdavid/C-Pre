#include <stdio.h>
#include <math.h>

int main()
{
    // program with if statement and in version 2 with switch statements
    // program that converts angle into sin/cos/tan values

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

    // if s than convert to sin and if c->cosinus, t->tangens
    if (zeichen == 's')
        printf("Sin(%lf) = %lf\n", grad, sin(bogen));
    else if (zeichen == 'c')
        printf("Cos(%lf)= %lf\n", grad, cos(bogen));
    else if (zeichen == 't')
        printf("Tan(%lf) = %lf\n", grad, tan(bogen));
    else
        // if the input is not s|v|c than print out a mistake
        printf("Fehler: kein Kennbuchstabe s c t\n");
}