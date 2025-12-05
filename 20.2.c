//Q40: Write a program to find the 1’s complement of a binary number and print it.

#include<stdio.h>
int main()
{
    int n, binaryNum[32], i = 0;

    printf("Enter a binary number: ");
    scanf("%d", &n);

    while (n > 0) {
        binaryNum[i] = n % 10;
        n = n / 10;
        i++;
    }

    printf("1's complement: ");
    for (int j = i - 1; j >= 0; j--) {
        if (binaryNum[j] == 0)
            printf("1");
        else
            printf("0");
    }
    printf("\n");

    return 0;
}