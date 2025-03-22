#include<stdio.h>
#include<string.h>
void substr(char str[1000],int length);
int main()
{
    char str[1000];
    int length;
    printf("enter the string: ");
    fgets(str,sizeof(str),stdin);
    length = strlen(str);
    if(str[length-1]=='\n')
    {
        str[length-1]='\0';
        length--;
    }
    substr(str,length);
}
void substr(char str[1000],int length)
{
    int j,i;
    char sub[100];
    printf("enter the substring :");
    scanf("%s",sub);
    int len = strlen(sub);
    for(i=0;i<=length-len;i++)
    {
        for(j=0;j<len;j++)
        {
            if(str[i+j]!=sub[j])
            {
                break;
            }
        }
        if(j==len)
        {
            printf("string found at index :%d",i);
            return;
        }
    }
    printf("string not found..");
}
