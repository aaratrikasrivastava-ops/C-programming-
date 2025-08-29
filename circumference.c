//Q4: Write a program to calculate the area and circumference of a circle given its radius.

#include<stdio.h>
int main()
{
    float r,area,circumference;
    printf("Enter teh radius of the circle :");
    scanf("%f",&r);
    area=3.14*r*r;
    circumference=2*3.14*r;
    printf("Area of the circle is :%.2f\n",area);
    printf("Circumference of the circle is :%.2f\n",circumference);
    return 0;
}