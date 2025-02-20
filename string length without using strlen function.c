#include<stdio.h>
#include<string.h>
int main()
{
    char str[1000];
    int count = 0;
    printf("enter the string:");
    fgets(str,sizeof(str),stdin);
    while(str[count]!='\0' && str[count]!='\n')
    {
        count++;
    }
    printf("length of string is: %d",count);
    
}
