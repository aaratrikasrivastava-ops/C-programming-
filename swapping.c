//Q7: Write a program to swap two numbers without using a third variable.

#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter the numbers");
    scanf("%d %d",&a,&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("After swapping the numbers are %d and %d",a,b);
    return 0;
}