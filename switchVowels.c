#include<stdio.h>
main()
{
    char ch;
    printf("\n enter the alphabets");
    scanf("%c",&ch);
    switch(ch)
    {
        case 'a' :printf("\n %c vowels ",ch);
                break;
        case 'e':printf("\n %c vowels ",ch);
                break;
        case 'i':printf("\n %c vowels ",ch);
                break;
        case 'o':printf("\n %c vowels ",ch);
                break;
        case 'u':printf("\n %c vowels ",ch);
                break;
        default :printf("\n %c consonants ",ch);
                break;
    }

}