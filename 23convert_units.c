#include <math.h>
#include <stdio.h>
#include <stdbool.h>

// function that converts Kelvin to Celsius
float convertTemperature(float temperature, char direction)
{
    switch (direction)
    {
    case 'C':
        return temperature + 273.15;
    case 'K':
        return temperature - 273.15;
    }
    return temperature;
}

int main()
{

    // init temp
    float temperature;

    // prompt user for input which temperature to convert
    printf("Enter temperature in Kelvin to convert in Celsius (end with ctrl+c): ");
    scanf("%f", &temperature);

    temperature = convertTemperature(temperature, 'K');

    printf("Temperature converted: %f\n", temperature);

    return 0;
}