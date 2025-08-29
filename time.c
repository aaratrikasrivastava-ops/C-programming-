//Q10: Write a program to input time in seconds and convert it to hours:minutes:seconds format.

#include<stdio.h>
int main()
{
    int sec,hr,min;
    printf("Enter time in seconds");
    scanf("%d",&sec);
    hr=sec/3600;
    min=(sec%3600)/60;
    sec=sec%60;
    printf("Time in hh:mm:ss format is %d:%d:%d",hr,min,sec);
    return 0;

}