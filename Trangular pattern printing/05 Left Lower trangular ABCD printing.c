#include<stdio.h>
#include<conio.h>

int main()
{

 int i=0,j=0,x=0;
 char ALPHA='A';

    printf("\n Enter no of rows and columns :");
    scanf("%d",&x);


    for(i=1; i<=x;i++)
    {
        for(ALPHA='A',j=1;j<=x;j++)
        {
            if(i>=j)
            {
              printf("%2d ",'A');
              ALPHA='A'+1;
            }

        }
        printf("\n");
    }
   getch();
   return 0;

}
