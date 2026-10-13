// Write a C program to check whether a number is even or odd using functions.
#include <stdio.h>

int isEven(int n);

int main(void)
{
    int num;
    
    printf("Enter a number: ");
    scanf("%d", &num);

    if (isEven(num) == 1) {
        printf("%d is Even\n", num);
    } else {
        printf("%d is Odd\n", num);
    }

    return 0;
}

int isEven(int n) {
    
    if (n % 2 == 0)
        return 1;
        
    return 0;
}