#include<stdio.h>
#include<conio.h>

int main()
{

 int i=0,j=0,x=0,num=2;

    printf("\n Enter no of rows and columns :");
    scanf("%d",&x);


    for(i=1; i<=x;i++)
    {
        for(num=2,j=1;j<=x;j++)
        {
            if(i+j<=x+1)
            {
              printf("%2d ",num);
              num=num+2;
            }

        }
        printf("\n");
    }
   getch();
   return 0;

}
