#include<stdio.h>
void vowelorcon(char c);
int main()
{
    char c;
    printf("enter the charcter:");
    scanf("%c",&c);
    vowelorcon(c);
}
void vowelorcon(char c)
{
    if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u')
    {
        printf("it is vowel:%c",c);
    }
    else
    {
        printf("it is consonant:%c",c);
    }
}
