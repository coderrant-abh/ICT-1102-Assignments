#include <stdio.h>

int main(void)
{
    float fahrenheit, celsius;

    printf("\nEnter temperature in Fahrenheit: ");
    scanf("%f", &fahrenheit);

    celsius = (fahrenheit - 32) * (5.0 / 9.0);

    printf("\nEquivalent Celsius temperature = %.2f\n\n", celsius);

    return 0;
}