#include <stdio.h>

int main(void)
{
    int base, exponent;
    long power = 1;

    printf("\nEnter base: ");
    scanf("%d", &base);

    printf("Enter exponent: ");
    scanf("%d", &exponent);

    for (int i = 1; i <= exponent; i++) {
        power = power * base;
    }

    printf("\nAnswer (%d^%d) = %ld\n\n", base, exponent, power);

    return 0;
}
