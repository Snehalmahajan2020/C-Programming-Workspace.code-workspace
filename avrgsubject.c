#include<stdio.h>
main()
{
    int math=0,phy=0,chem=0,bio=0,comp=0,sum=0,per;
    printf("\n enter 5 subject marks");
    scanf("%d%d%d%d%d",&math,&phy,&chem,&bio,&comp);

    per=sum*100/500;
    printf("\n %d",per);

    if(per>=90 && per<100)
    {
        printf("\n GRADE A");
    }

     else if(per>=80 && per<90)
     {
         printf("\n GRADE B");
     }

      else if(per>=70 && per<80)
    {
        printf("\n GRADE C");
    }
       else if(per>=60 && per<70)
        {
            printf("\n GRADE D");
        }
       else if(per>=40 && per<60)
       {
           printf("\n GRADE E");
       }
       else 
       {
           printf("\n FAIL");
       }

}