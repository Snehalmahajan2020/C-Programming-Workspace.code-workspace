#include<stdio.h>
main()
{
    char ch;
    printf("n enter alphabets");
    scanf("%c",&ch);

    if(ch=='a'|| ch=='e'|| ch=='i'|| ch=='o'|| ch=='u')
    {
        printf("\n it is vowels");
    }
    else
    {
        printf("\n its consonants");
    }
}