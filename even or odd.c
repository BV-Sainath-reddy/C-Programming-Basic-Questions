#include<stdio.h>
void oddoreven(int a);
int main()
{
    int a;
    printf("enter the number:");
    scanf("%d",&a);
    oddoreven(a);
}
void oddoreven(int a)
{
    if(a%2==0)
    {
        printf("%d is even",a);
    }
    else
    {
        printf("%d is odd",a);
    }
}
