#include<stdio.h>
main()
{
    int a=30,b=40,c=50;

    if(a>b && a>c)
    {
        printf("\n a is largest");
    }
    else if ( b>a && b>c)
    {
        printf("\n b is greater");
    }
    else 
    {
        printf("\n c is greater");
    }
}