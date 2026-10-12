// Write a C program to find cube of any number using function.

#include <stdio.h>

int cube(int x) {
    return x * x * x;
}

int main(void) 
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Cube of %d = %d\n", n, cube(n));
    
    return 0;
}