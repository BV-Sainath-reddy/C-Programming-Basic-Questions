#include<stdio.h>
#include<string.h>
int main()
{
    char str[1000],temp[1000]="";
    printf("enter the string:");
    fgets(str,sizeof(str),stdin);
    printf("original string is:%s",str);
    for(int i=0;i<strlen(str);i++)
    {
        temp[i]=str[i];
    }
    printf("copied string is:%s",temp);
    
}
