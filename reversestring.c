#include<stdio.h>
#include<string.h>
int main()
{
    char s1[20];
    printf("\n enter string");
    gets(s1);
    
    strrev(s1);
    printf("\n reverse string %s",s1);
}