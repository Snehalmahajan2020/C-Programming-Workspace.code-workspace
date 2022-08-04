#include<stdio.h>
main()
{
    int num=0;
    printf("\n enter no");
    scanf("%d",&num);

    switch(num>0)
    {
        case 1:printf("\n %d it is positive",num);
                break;
        case 0:if(num<0)
                {
                    printf("\n %d it is negative",num);
                }
                else
                {
                    printf("\n %d it is zero",num);
                }
                break;
    }
}