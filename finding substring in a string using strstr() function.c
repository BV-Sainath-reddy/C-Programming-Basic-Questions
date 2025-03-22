#include<stdio.h>
#include<string.h>
int main()
{
    char str[1000],substr[100];
    int mainlength,sublength;
    printf("enter the string:");
    fgets(str,sizeof(str),stdin);
    mainlength=strlen(str);
    if(str[mainlength-1]=='\n')
    {
        str[mainlength-1]='\0';
        mainlength--;
    }
    printf("enter the substring:");
    fgets(substr,sizeof(substr),stdin);
    sublength = strlen(substr);
    if(substr[sublength-1]=='\n')
    {
        substr[sublength-1]='\0';
        sublength--;
    }
    if(strstr(str,substr)!=NULL)
    {
        printf("string found..");
    }
    else
    {
        printf("string not found..");
    }
}
