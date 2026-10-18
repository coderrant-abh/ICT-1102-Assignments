/* Write a C program to print all strong numbers between 
            given interval using functions.      */

#include <stdio.h>

int factorial(int n);
int isStrong(int n);
void printStrong(int start, int end);

int main(void)
{
    int start, end;

    printf("Enter start and end of interval: ");
    scanf("%d %d", &start, &end);

    printf("Strong numbers between %d and %d are:\n", start, end);
    printStrong(start, end);
    
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
        temp = temp / 10;
    }
    
    if (sum == n)
        return 1;
    else
        return 0;
}

void printStrong(int start, int end) {
    
    int i;
    
    for (i = start; i <= end; i++) {
        if (isStrong(i))
            printf("%d ", i);
    }
    
    printf("\n");
}