#include<stdio.h>
main()
{
    char s1[20]="spark",s2[20]="spark";
    int value=0;

    printf("\n enter 1st string :\n");
    gets(s1);

    printf("\n enter 2nd string :\n");
    gets(s2);

    value=strcmp(s1,s2);

    if(value==0)
    {
        printf("\n both values are same");
    }
    else
    {
        printf("\n both values are not same \n");
    }
    
}