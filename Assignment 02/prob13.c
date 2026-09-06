// Write a C program to swap the first and last digits of a number

#include <stdio.h>

int main(void)
{
    int n, firstDigit, lastDigit;
    int divisor = 1, swappedNumber;

    printf("\nEnter a number: ");
    scanf("%d", &n);

    int temp = n;

    while (temp >= 10) {
        temp = temp / 10;
        divisor = divisor * 10; // To track the place value
    }

    firstDigit = temp;
    lastDigit = n % 10;

    // Remove first and last digits
    int middle = (n % divisor) / 10;

    swappedNumber = lastDigit * divisor + middle * 10 + firstDigit;

    printf("\nNumber after swapping first & last digit = %d\n\n", swappedNumber);

    return 0;
}