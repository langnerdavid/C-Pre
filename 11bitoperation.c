#include <stdio.h>

int main()
{
    // program that combines two numbers bitwise
    //  ~, & und |

    // initialize var
    //  a & b are the numbers that the user will input
    // the others are going to be the results later on
    int a, b, negation_a, negation_b, bitwise_and, bitwise_or;
    printf("Enter two numbers:\n");

    // prompt the user for the first number
    printf("Enter first number: ");
    scanf("%d", &a);

    // prompt the user for the second number
    printf("Enter second number: ");
    scanf("%d", &b);

    // negation of the users input: ex. 1001 -> 0110
    // input gets neg because all bits before the first one are 0 and now 1
    negation_a = ~a;
    negation_b = ~b;

    // bitwise and combination: ex. 0110 & 0001 -> 0000 or 0110 & 0010 -> 0010
    bitwise_and = a & b;

    // bitwise or combination: ex. 0110 & 0001 -> 0111
    bitwise_or = a | b;

    // print out all the resutls
    printf("Negation of a: %d\n", negation_a);
    printf("Negation of b: %d\n", negation_b);
    printf("Bitwise and: %d\n", bitwise_and);
    printf("Bitwise or: %d\n", bitwise_or);

    printf("It works2");
}