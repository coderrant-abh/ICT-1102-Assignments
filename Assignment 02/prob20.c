// Write a C program to print all the ASCII characters with their values

#include <stdio.h>

int main(void)
{
    int i = 0;

    while (i <= 127) {
        printf("%d = %c\n", i, i);
        i++;
    }

    return 0;
}