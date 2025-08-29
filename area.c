//Q3: Write a program to calculate the area and perimeter of a rectangle given its length and breadth.

#include<stdio.h>
int main()
{
    float l,b,area,perimeter;
    printf("Eneter length and breadth of rectangle :");
    scanf("%f %f",&l,&b);
    area=l*b;
    perimeter=2*(l+b);
    printf("Area of rectangle is : %.2f\n",area);
    printf("perimeter of rectangle is : %.2f\n",perimeter);
    return 0;
}