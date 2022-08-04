#include<stdio.h>
main()
{
    int num1=0,num2=0;
    printf("\n enter the 2 number");
    scanf("%d%d",&num1,&num2);

    switch(num1>num2)
    {
        case 0:printf("\n %d its max",num1);
                break;
        case 1:printf("\n %d its max",num2);
                break;
    }

}