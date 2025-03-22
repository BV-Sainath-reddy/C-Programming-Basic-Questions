#include<stdio.h>
#include<string.h>
int main()
{
    char str[1000],c;
    int i,a,arr[100],count=0;
    printf("enter the string:");
    fgets(str,sizeof(str),stdin);
    printf("enter the character to find frequency:");
    scanf("%c",&c);
    int len = strlen(str);
    if(str[len-1]=='\n')
    {
        str[len-1]='\0';
        len--;
    }
    for(i=0;i<len-1;i++)
    {
        if(str[i]==c)
        {
            arr[count]=i;
            count++;
        }
    }
    for(i=0;i<count;i++)
    {
    printf("character is at position :%d\n",arr[i]);
        
    }
}
