//Q19: Write a program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths.


#include<stdio.h>
int main()
{
int a,b,c;
printf("Enter the sides of the triangles : ");
scanf("%d %d %d",&a,&b,&c);
if(a==b && b==c)
{
printf("It is a equilateral triangle");
}
else if (a==b || b==c || c==a)
{
printf("It is a isoceles triangle");
}
else if (a!=b && b!=c && c!=a)
{
printf("It is a scalene triangle");
}
else
{
printf("Invalid!");
}
return 0;
}
