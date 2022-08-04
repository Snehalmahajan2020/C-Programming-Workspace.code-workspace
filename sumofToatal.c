#include<stdio.h>
main()
{
    int math=0,phy=0,chem=0,total=0;
    printf("\n enter the marks");
    scanf("%d",&math,&phy,&chem);

    total=math+phy+chem;
    printf("\n total is %d",total);

    if(math>=65 && phy>=55 && chem>=50 && total>=180)
    {
        printf("\n it is eligible");
    }
    else
    {
        printf("\n not eligible");
    }
    
}