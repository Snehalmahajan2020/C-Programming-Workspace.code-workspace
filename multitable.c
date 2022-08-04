#include<stdio.h>
main()
{
    int i,j;
    
    for(i=10;i<=20;i++)
    {
        for(j=1;j<=10;j++)
        {
            printf("\n %d*%d=%d",i,j,i*j);
        }
    }
}