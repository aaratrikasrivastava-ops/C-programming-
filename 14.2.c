//Q28: Write a program to print the product of even numbers from 1 to n.

#include<stdio.h>
int main()
{
    int n, i;
    long product =1;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    for(i=0; i<=n;i++)
    {
        if(i%2==0 && i!=0)
        {
            product=product*i;
            printf("Product of even numbers from 1 to %d is %ld\n", n, product);
        }
    }
}