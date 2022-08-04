#include<stdio.h>
main()
{
    int n;
    printf("\n enter days of week");
    scanf("%d",&n);

    switch(n)
    {
        case 1:printf("\n %d its monday",n);
                break;
        case 2:printf("\n %d its tuesday",n);
                break;
        case 3:printf("\n %d its wednesday",n);
                break;
        case 4:printf("\n %d its thursday",n);
                break;
        case 5:printf("\n %d its friday",n);
                break;
        case 6:printf("\n %d its saturday",n);
                break;
        case 7:printf("\n %d its sunday",n);
                break;
        default:printf("\n worng choice",n);
    }
}