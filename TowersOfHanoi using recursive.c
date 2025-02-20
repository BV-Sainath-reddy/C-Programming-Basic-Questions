#include<stdio.h>
void towerofhanoi(int a,char source,char middle,char destination);
int main()
{
    int n;
    printf("enter the number of blocks:");
    scanf("%d",&n);
    towerofhanoi(n,'A','B','C');
}
void towerofhanoi(int a,char source,char middle,char destination)
{
    if(a>0)
    {
        towerofhanoi(a-1,source,destination,middle);
        printf("Move block from %c to %c\n",source,destination);
        towerofhanoi(a-1,middle,source,destination);
    }
}
