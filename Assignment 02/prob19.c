#include <stdio.h>

int main(void)
{
    int n, digit, reverse = 0;

    printf("\nEnter a number: ");
    scanf("%d", &n);

    printf("\n");

    if (n == 0) {
        printf("Zero");
    }

    if (n < 0) {
        printf("Minus ");
        n = -n;
    }

    /*********************************************************************
    *   Reverse the number; because when we using (n % 10); We get the
    *    number from right to left but what we need is left to right.
    **********************************************************************/
    while (n != 0) {
        digit = n % 10;
        reverse = reverse * 10 + digit;
        n = n / 10;
    }

    while (reverse != 0) {
        digit = reverse % 10;

        switch (digit) {
            case 0: printf("Zero "); break;
            case 1: printf("One "); break;
            case 2: printf("Two "); break;
            case 3: printf("Three "); break;
            case 4: printf("Four "); break;
            case 5: printf("Five "); break;
            case 6: printf("Six "); break;
            case 7: printf("Seven "); break;
            case 8: printf("Eight "); break;
            case 9: printf("Nine "); break;
        }

        reverse = reverse / 10;
    }

    printf("\n\n");

    return 0;
}