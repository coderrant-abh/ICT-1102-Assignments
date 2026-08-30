#include <stdio.h>

int main(void)
{
    int n, product = 1, digit;

    printf("\nEnter a number: ");
    scanf("%d", &n);

    if (n == 0) {
        printf("\nProduct of the digits = 0\n\n");
    } else {
        while (n != 0) {
            digit = n % 10;
            product = product * digit;
            n = n / 10;
        }

        printf("\nProduct of the digits = %d\n\n", product);
    }

    return 0;
}
