#include<stdio.h>
main()
{
    int i,range;
    printf("\n enter the range");
    scanf("%d",&range);

    for(i=0;i<=range;i++)
    {
        if(i%3==0 && i%5==0)
        {
            printf("\n =%d",i);
        }
    }
}