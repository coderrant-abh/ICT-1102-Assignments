// Write a C program to print all alphabets from a to z. – using while loop

#include <stdio.h>

int main(void)
{
    char i = 'a', n = 'z';

    while (i <= n) {
        printf("%c  ", i);
        i++;
    }

    printf("\n");

    return 0;
}