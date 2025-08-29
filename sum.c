//Q8: Write a program to find and display the sum of the first n natural number

#include<stdio.h>
int  main()
{
    int n, sum;
    printf("Enter a number :");
    scanf("%d",&n);
    sum = n*(n+1)/2;
    printf("Sum of first %d naturnal numbers is : %d",n,sum);
        return 0;
}