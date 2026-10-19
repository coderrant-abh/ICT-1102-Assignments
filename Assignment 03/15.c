//  Write a C program to find reverse of any number using recursion.
#include <stdio.h>

int reverse(int n, int rev);

int main(void)
{
    int num;
    printf("\nEnter a number: ");
    scanf("%d", &num);
    
    printf("\nReverse of %d = %d\n", num, reverse(num, 0));
    
    return 0;
}

int reverse(int n, int rev) {
    
    if (n == 0) {
        return rev;
    }

    return reverse(n / 10, rev * 10 + n % 10);
}
