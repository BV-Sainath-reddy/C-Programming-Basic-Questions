#include<stdio.h>
#include<math.h>
int squareofnum(int a);
int main()
{
    int a,result;
    printf("enter the number:");
    scanf("%d",&a);
    result = squareofnum(a);
    printf("square of a number is : %d",result);
}
int squareofnum(int a)
{
    if(a==1)
    {
        return 1;
    }
    return squareofnum(a-1)+2*a-1;
}
