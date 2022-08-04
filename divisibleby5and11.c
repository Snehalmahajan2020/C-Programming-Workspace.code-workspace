#include<stdio.h>
main()
{
    int n;
    printf("\n enter the no");
    scanf("%d",&n);

    if(n%5==0 && n%11==0)
    {
        printf("\n it is divisible by 5 and 11");
    }
    else
    {
        printf("\n not divisible by 5 and 11");
    }
}