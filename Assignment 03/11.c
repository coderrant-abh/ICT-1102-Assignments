//  Write a C program to print all natural numbers between 1 to n using recursion. 
#include <stdio.h>

void printNum(int i, int n);

int main(void)
{
    int n;
    
    printf("Enter n: ");
    scanf("%d", &n);
    
    printf("\nNatural numbers from 1 to %d:\n", n);
    printNum(1, n);
    
    printf("\n\n");
    
    return 0;
}

void printNum(int i, int n)
{
    if (i > n) {
        return;
    }
        
    printf("%d ", i);
    printNum(i + 1, n);
}