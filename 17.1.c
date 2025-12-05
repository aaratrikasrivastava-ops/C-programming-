// Write a program to check if a number is an Armstrong number.

#include<stdio.h>
int main() {
    int num, a, r, n = 0;
    float result = 0.0;
    printf("Enter an integer: ");
    scanf("%d", &num);
    a = num;
    for (a = num; a != 0; ++n) {
        a /= 10;
    }

    a = num;
     for (a = num; a != 0; a /= 10) {
        r = a % 10;
        result += pow(r, n);
    }
    if ((int)result == num)
        printf("%d is an Armstrong number.\n", num);
    else
        printf("%d is not an Armstrong number.\n", num);

    return 0;
}