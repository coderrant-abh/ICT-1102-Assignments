// Write a C program to check whether a number is palindrome or not, using recursion.
#include <stdio.h>

int reverse(int n, int rev) {
    if (n == 0)
        return rev;
    return reverse(n / 10, rev * 10 + n % 10);
}

int main(void)
{
    int n, rev;
    
    printf("\nEnter a number: ");
    scanf("%d", &n);

    rev = reverse(n, 0);

    if (n == rev)
        printf("\n%d is a Palindrome\n\n", n);
    else
        printf("\n%d is NOT a Palindrome\n\n", n);

    return 0;
}