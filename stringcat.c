#include<stdio.h>
main()
{
    char s1[20],s2[20];
    int i,j;
    printf("\n \nenter 1st string :\n");
    gets(s1);
    printf("\n \nenter 2nd string :\n");
    gets(s2);

    for(i=0;s1[i]!='\0';i++);
 
        for(j=0;s2[j]!='\0';j++,i++)
        {
            s1[i]=s2[j];
        }
        s1[i]='\0';
  
    printf("\n string concatination=%s \n",s1);
}