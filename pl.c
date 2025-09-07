//Q22: Write a program to find profit or loss percentage given cost price and selling price.

#include<stdio.h>
int main()
{
    int cp,sp;
    float profit,loss;
    printf("Enter cost price and selling price: ");
    scanf("%d%d",&cp,&sp);
    if(sp>cp)
    {
        profit=sp-cp;
        printf("Profit percentage: %.2f%%", (profit/cp)*100);   
    }
    else if(cp>sp)
    {
        loss=cp-sp;
        printf("Loss percentage: %.2f%%", (loss/cp)*100);
    }
    else
    {
        printf("No profit no loss");
    }
    return 0;
}