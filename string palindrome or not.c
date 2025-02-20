#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    char temp[100]=" ";
    printf("enter the string:");
    scanf("%s",str);
    int len = strlen(str);
    for(int i=0;i<len;i++)
    {
        temp[i]=str[len-i-1];
    }
    printf("%s",temp);
    if(strcmp(str,temp)==0)
    {
        printf("\nIt is palindrome\n");
    }
    else
    {
        printf("\nit is not a palindrome\n");
    }
}
