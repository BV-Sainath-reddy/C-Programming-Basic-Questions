#include<stdio.h>
void posneg(int num);
int main()
{
    int n;
    printf("enter the number");
    scanf("%d",&n);
    posneg(n);
}
void posneg(int num)
{
    if(num>0)
    {
        printf("%d is positive",num);
    }
    else if(num<0)
    {
        printf("%d is negative",num);
    }
    else
    {
        printf("zero");
    }
}
