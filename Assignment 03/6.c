// Write a C program to find all prime numbers between given interval using functions.

#include <stdio.h>

int isPrime(int n);
void printPrimes(int start, int end);

int main(void)
{
    int start, end;
    
    printf("Enter the intervals (start & end): ");
    scanf("%d %d", &start, &end);
    
    printf("\nPrime numbers between %d and %d are:\n", start, end);
    printPrimes(start, end);
    
    return 0;
}

void printPrimes(int start, int end)
{
    for (int i = start; i <= end; i++) {
        if (isPrime(i)) {
            printf("%d ", i);
        }
    }
    
    printf("\n\n");
}

int isPrime(int n)
{
    if (n <= 1)
        return 0;
    
    for (int i = 2; i <= n/2; i++) {
        if (n % i == 0)
            return 0;
    }
    
    return 1;
}