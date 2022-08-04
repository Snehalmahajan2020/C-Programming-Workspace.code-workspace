#include<stdio.h>
main()
{
    char s1[20],s2[20];
    int i;
    printf("\n \n enter string :\n");
    gets(s1);

    for(i=0;s1[i]!='\0';i++)

    {
        s2[i]=s1[i];

    }
    printf("\n copy value %s",s2);
}