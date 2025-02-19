#include<stdio.h>
void swap(int x,int y);
int main()
{
    int x,y;
    printf("enter the numbers to swap:");
    scanf("%d%d",&x,&y);
    swap(x,y);
}
void swap(int x,int y)
{
    int temp;
    temp=x;
    x=y;
    y=temp;
    printf("after swapping %d %d",x,y);
}
