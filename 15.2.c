// Write a program to reverse a given number.

#include<stdio.h>
int main()
{
    int num,r=0,rem;
    printf("Enter a number: ");
    scanf("%d", &num);
    while(num!=0)
    {
        rem=num%10;
        r=r*10+rem;
        num=num/10;
    }
    printf("Reversed number: %d\n", r);
    return 0;
}