#include<stdio.h>
void gof3(int a,int b,int c);
int main()
{
    int a,b,c;
    printf("enter three numbers:");
    scanf("%d%d%d",&a,&b,&c);
    gof3(a,b,c);
}
void gof3(int a,int b,int c)
{
    if(a>b && a>c)
    {
        printf("%d is greatest",a);
    }
    if(b>a && b>c)
    {
        printf("%d is greatest",b);
    }
    if(c>b && c>a)
    {
        printf("%d is greatest",c);
    }
}
