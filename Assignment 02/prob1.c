// Write a C program to print all natural numbers from 1 to n. – using while loop

#include <stdio.h>

int main(void)
{
    int n, i = 1;
    
    printf("\nEnter the number: ");
    scanf("%d", &n);

    while (i <= n) {
        printf("%d\n", i);
        i++;
    }

    return 0;
}