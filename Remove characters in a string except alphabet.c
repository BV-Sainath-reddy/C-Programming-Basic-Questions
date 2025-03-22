#include<stdio.h>
#include<ctype.h>
#include<string.h>
int main()
{
    char str[1000],c;
    int i,j=0;
    printf("enter the string:");
    fgets(str,sizeof(str),stdin);
    int len = strlen(str);
    if(str[len-1]=='\n')
    {
        str[len-1]='\0';
        len--;
    }
    for(i=0;i<len;i++)
    {
        if(isalpha(str[i]))
        {
            str[j]=str[i];
            j++;
        }
    }
    str[j]='\0';
    printf("String is:%s",str);
   
}
