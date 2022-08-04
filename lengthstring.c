#include<stdio.h>
#include<string.h>
main()
{
    int len;
    char s[20];
    printf("\n enter string");
    gets(s);

    len=strlen(s);
    printf("\n string %d",len);
}