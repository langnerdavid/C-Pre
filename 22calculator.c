#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float calculate(char operator, float result, float input)
{
    // check which operator the user typed in and update the result
    switch (operator)
    {
    case '+':
        return (result += input);
    case '-':
        return (result -= input);
    case '*':
        return (result *= input);
    case '/':
        return (result /= input);
    }
    return result;
}

int main()
{
    // init vars
    // prgram that simulates a working calculator with result after every calculation and an end result after you type "="

    // int vars
    float result, input;

    // calc operator
    char operator;

    // ask user for starting calculation
    printf("Ihr Startwerte für ihre Kalkulation: ");
    scanf("%f %c %f", &result, &operator, & input);

    // calculate the first calculation depending on what the user typed in
    result = calculate(operator, result, input);

    // print out to console
    printf("Zwischenergebnis: %f\n", result);

    while (1)
    {
        // prompt user for next operator and value
        printf("Nächster Rechenschritt: ");
        scanf(" %c", &operator);

        // if user typed in '=' end calculation and end loop otherwise move on
        if (operator== '=')
        {
            break;
        }

        // check for number
        scanf("%f", &input);

        // update the result
        result = calculate(operator, result, input);

        // print out the partial result after each calculation
        printf("Zwischenergebnis: %f\n", result);
    }
    // print out the end result
    printf("Endergebnis: %f\n", result);
}