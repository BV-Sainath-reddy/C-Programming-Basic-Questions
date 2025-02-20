#include<stdio.h>
int exponent(int a,int n);
int main()
{
    int a,n;
    printf("enter the number:");
    scanf("%d",&a);
    printf("enter the power or exponent for a given number:");
    scanf("%d",&n);
    int result = exponent(a,n);
    printf("result : %d",result);
}
int exponent(int a,int n)
{
    if(n==0)
    {
        return 1;
    }
    return a*exponent(a,n-1);
}
