#include<stdio.h>
#include<string.h>
int main()
{
    char str[100]=" ",temp[100];
    int length,line=0,space=0,tab=0;
    printf("enter the string :");
    while(1){
        fgets(temp,sizeof(str),stdin);
        if(temp[0]=='\n')
        break;
            strcat(str,temp);

    }
    length = strlen(str);
    for(int i=0;i<length;i++)
    {
        if(str[i]=='\n')
        {
            line++;
        }
        else if(str[i]=='\t')
        {
            tab++;
        }
        else if(str[i]==' ')
        {
            space++;
        }
    }
    printf("lines:%d\ntabs:%d\nspace:%d",line,tab,space);
}
