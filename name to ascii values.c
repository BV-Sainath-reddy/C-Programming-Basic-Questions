#include<stdio.h>
#include<string.h>
int main()
{
    char name[100];
    printf("enter your name for changing into ASCII values:");
    scanf("%s",name);
    int length = strlen(name);
    for(int i=0;i<length;i++)
    {
        printf("%c value is %d\n",name[i],name[i]);
    }
}
