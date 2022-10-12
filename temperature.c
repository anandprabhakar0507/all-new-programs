// Program to convert temperature in Celsius into Fahrenheit
#include <stdio.h>
void main()
{
    float c, f = 0.0;
    printf("Enter the temperature in celsius: ");
    scanf("%f", &c);
    f = ((9 * c) / 5) + 32;

    printf("The temperature in fahrenheit is %f ", f);
}