#include<stdio.h>
#include<string.h>
int main()
{
    char str1[100],str2[100],result[200];
    int i,j;
    printf("enter the string 1:");
    fgets(str1,sizeof(str1),stdin);
    int length = strlen(str1);
    if(str1[length-1]=='\n')
    {
        str1[length-1]='\0';
        length--;
    }
    for(i=0;i<length;i++)
    {
        result[i]=str1[i];
    }
    printf("enter the string 2:");
    fgets(str2,sizeof(str2),stdin);
    int length2 = strlen(str2);
     if(str2[length2-1]=='\n')
    {
        str2[length2-1]='\0';
        length2--;
    }
    for(j=0;j<length2;j++)
    {
        result[i+j]=str2[j];
    }
    result[i+j]='\0';
    printf("%s",result);
}
