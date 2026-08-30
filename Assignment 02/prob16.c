#include <stdio.h>

int main(void)
{
    int n, digit, reverse = 0;

    printf("\nEnter a number: ");
    scanf("%d", &n);

    while (n != 0)
    {
        digit = n % 10;
        reverse = reverse * 10 + digit;
        n = n / 10;
    }

    printf("\nReverse print of the number: %d\n\n", reverse);

    return 0;
}
