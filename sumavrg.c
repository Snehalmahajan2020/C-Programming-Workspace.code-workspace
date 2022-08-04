#include<stdio.h>
main()
{
    int i,n,sum=0;
    float avg;
    
   
    for(i=1;i<=10;i++)
    {

        sum=sum+i;

    }

    avg=sum/10;
    printf("\n sum of 10 no is =%d",sum);
    printf("avrg of sum =%f",avg);
}