//  Write a C program to print all natural numbers between 1 to n using recursion. 

#include <stdio.h>

void printNumbers(int i, int n);

int main(void)
{
    int n;
    
    printf("Enter n: ");
    scanf("%d", &n);
    
    printf("\nNatural numbers from 1 to %d:\n", n);
    printNumbers(1, n);
    
    printf("\n\n");
    
    return 0;
}

void printNumbers(int i, int n)
{
    if (i > n) {
        return;
    }
        
    printf("%d ", i);
    printNumbers(i + 1, n);
}