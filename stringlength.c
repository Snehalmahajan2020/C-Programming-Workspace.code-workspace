#include<stdio.h>
main()
{
    char s1[20];
    int i,len=0;
    printf("\n enter string :");
    gets(s1);

    for(i=0;s1[i]!='\0';i++)
    {
        len++;
    }
    printf("\n length of string=%d",len);
}