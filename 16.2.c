// Write a program to check if a number is a palindrome.

#include<stdio.h>
int main() 
{
    int num, a, b = 0, r;
    printf("Enter an integer: ");
    scanf("%d", &num);
    a = num;
    while (num != 0) {
        r = num % 10;
        b = b * 10 + r;
        num /= 10;
    }
    if (a == b) {
        printf("%d is a palindrome.\n", b);
    } else {
        printf("%d is not a palindrome.\n", a);
    }

    return 0;
}