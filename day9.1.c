//Q17: Write a program to find the roots of a quadratic equation and categorize them.

#include<stdio.h>
int main()
{
    int a,b,c,d,r1,r2;
    printf("Enter the values of a,band c :");
    scanf("%d %d %d",&a,&b,&c);
    d=b*b-4*a*c;
    r1=(-b+sqrt(d))/(2*a);
    r2=(-b+sqrt(d))/(2*a);
    if(d>0)
    {
        printf("Roots are real and different: r1=%d and r2:%d",r1,r2);
    }
    else if (d==0)
    {
        printf("Roots are real and same: r1=r2=%d",r1);
    }
    else 
    {
        ptintf("Roots are  imaginary");
    }
    return 0;
}
    
