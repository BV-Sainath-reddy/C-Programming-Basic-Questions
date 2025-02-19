#include<stdio.h>
void leapyear(int year);
int main()
{
    int year;
    printf("enter the year :");
    scanf("%d",&year);
    leapyear(year);
}
void leapyear(int year)
{
    if(year%4==0 && year%100!=0 || year%400==0)
    {
        printf("leap year:%d",year);
    }
    else
    {
        printf("it is not a leap year:%d",year);
    }
}
