#include<stdio.h>
#include<string.h>
int sortalphabet(char str[100],int len);
int main()
{
    char str[100];
    printf("enter the string : ");
    scanf("%s",str);
    int length = strlen(str);
    sortalphabet(str,length);
}
int sortalphabet(char str[100],int len)
{
    for(int i=0;i<len-1;i++)
    {
        for(int j=0;j<len-1;j++)
        {
            if((int)str[j]>(int)str[j+1])
            {
                char temp =str[j+1];
                str[j+1]=str[j];
                str[j]=temp;
            }  
        }
        
    }
    printf("%s",str);
}
