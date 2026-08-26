#include <stdio.h>

int main(void)
{
    float centimeter, meter, kilometer;

    printf("\nEnter length (in centimeter): ");
    scanf("%f", &centimeter);

    meter = centimeter / 100;
    kilometer = centimeter / 100000;

    printf("\nLength in meter = %.3f m\n", meter);
    printf("Length in kilometer = %.3f km\n\n", kilometer);

    return 0;
}