/* Write a C program to print all strong numbers between 
            given interval using functions.      */
#include <stdio.h>

int factorial(int n);
int isStrong(int n);

int main(void)
{
    int start, end, i;

    printf("\nEnter start and end of interval: ");
    scanf("%d %d", &start, &end);

    printf("\nStrong numbers between %d and %d are:\n", start, end);
    
    for (i = start; i <= end; i++) {
        if (isStrong(i))
            printf("%d ", i);
    }

    printf("\n\n");
    
    return 0;
}

int factorial(int n) {
    
    int i, fact = 1;

    for (i = 1; i <= n; i++) {
        fact = fact * i;
    }

    return fact;
}

int isStrong(int n) {
    
    int temp = n, sum = 0, digit;
    
    while (temp != 0) {
        digit = temp % 10;
        sum = sum + factorial(digit);
        temp /= 10;
    }
    
    if (sum == n)
        return 1;
    else
        return 0;

    /************************************************************
    *  Here we can also just use 'return sum == n;' instead of
    *            this last if-else condition
    *************************************************************/
}