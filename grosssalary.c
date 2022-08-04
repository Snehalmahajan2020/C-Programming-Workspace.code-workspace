#include<stdio.h>
main()
{
    int bs,hra,da,grosssalary;
    printf("\n enter basic salary");
    scanf("\n %d",&bs);

    if(bs<=10000)
    {
        hra=bs*20/100;
        da=bs*80/100;
    }
    else if(bs<=20000)
    {
        hra=bs*25/100;
        da=bs*90/100;
    }
    else
    {
        hra=bs*30/100;
        da=bs*95/100;
    }
    grosssalary=bs+hra+da;
    printf("\n grosssalary %d",grosssalary);

    printf("\t bs \t hra \t da \t grosssalary\n");

    printf("\t %d,\t %d,\t %d,\t %d",bs,hra,da,grosssalary);
    printf("\n grosssalary is %d",grosssalary);
}