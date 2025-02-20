#include<stdio.h>
int gcd(int a,int b);
int main()
{
    int a,b;
    printf("enter the two numbers for finding gcd:");
    scanf("%d%d",&a,&b);
    int result = gcd(a,b);
    printf("gcd of %d and %d is: %d",a,b,result);
}
int gcd(int a,int b)
{
    int temp;
    if(b==0)
    {
        return a;
    }
    else
    {
        return gcd(b,a%b);
    }
}
