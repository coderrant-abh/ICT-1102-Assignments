#include <stdio.h>

int main(void)
{
    float celsius, fahrenheit;

    printf("\nEnter temperature in Celsius: ");
    scanf("%f", &celsius);

    fahrenheit = (celsius * (9.0 / 5.0)) + 32;

    printf("\nEquivalent Fahrenheit temperature = %.2f\n\n", fahrenheit);

    return 0;
}