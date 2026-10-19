/* Write a C program to print all Armstrong numbers between
             given interval using functions    */
#include <stdio.h>

int isArmstrong(int n);

int main(void)
{
    int start, end, i;
    
    printf("\nEnter the intervals (Start & End): ");
    scanf("%d %d", &start, &end);
    
    printf("\nArmstrong numbers between %d and %d are:\n", start, end);
    
    for (i = start; i <= end; i++) {
        if (isArmstrong(i)) {
            printf("%d ", i);
        }
    }
    
    printf("\n\n");

    return 0;
}

int isArmstrong(int n) {
    
    int temp = n, sum = 0, digit, count = 0, power, i;

    int t = n;
    
    while (t != 0) {
        count++;
        t /= 10;
    }

    while (temp != 0) {
        digit = temp % 10;
        power = 1;

        for (i = 1; i <= count; i++) {
            power *= digit;
        }

        sum += power;
        temp /= 10;
    }

    return sum == n;

    /*******************************************************
    *       Here we can also use - 
    *               
    *                  if (sum == n) {
    *                      return 1;
    *                  } else {
    *                      return 0;
    *                  }
    *
    *   instead of this ' return sum == n; ' condition
    ********************************************************/
}