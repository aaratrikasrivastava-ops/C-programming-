//Q9: Write a program to calculate simple and compound interest for given principal, rate, and time 

#include<stdio.h>
int main()
{
    float p,r,t,si,ci;
    printf("Enter principal amount, rate of interest and time");
    scanf("%f %f %f",&p,&r,&t);
    si=(p*r*t)/100;
    ci=p*(1+r/100);
    ci=ci*ci;
    printf("Simple interest %f\n",si);
    printf("Compound interest %f\n",ci);
    return 0;
}