#include <stdio.h>

enum direction
{
    K2C,
    C2K
};

double convert(double temperature, enum direction c)
{
    double result;
    switch (c)
    {
    case K2C:
        result = temperature - 273.15;
        break;
    case C2K:
        result = temperature + 273.15;
        break;
    }
    return result;
}

int main()
{
    double temperature;
    // ask user to input a temp to convert
    printf("Enter temperature to convert: ");
    scanf("%lf", &temperature);

    // print converted temperature
    printf("%lf\n", convert(temperature, K2C));
}