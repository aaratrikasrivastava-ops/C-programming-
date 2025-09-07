//Q25: Write a program to implement a basic calculator using switch-case for +, -, *, /, %

#include<stdio.h>
int main(){
char op;
float num1 , num2;
printf("enter the first number");
scanf("%f",&num1);
printf("enter the second number");
scanf("%f",&num2);
printf("Enter an operator(+,-,*,/): ");
scanf(" %c",&op);
  if(op=='+')
  {
  printf("result: %f\n",num1+num2);
  }
    else if(op=='-')
    {
    printf("result: %f\n",num1-num2);
    }
    else if(op=='*')
    {
    printf("result: %f\n",num1*num2);
    }
    else if(op=='/'){
      if(num2!=0)
      {
      printf("error");
      }
      else
      {
       printf("result: %f\n",num1/num2);
       }
    }
  else
  {
  printf("Invalid operator");
  }
return 0;
}