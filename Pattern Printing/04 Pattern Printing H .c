#include<stdio.h>
#include<conio.h>


int main()
{
int i=0,j=0,x=0;

    printf("Enter number of rows and columns  :");
    scanf("%d",&x);


    for(i=1;i<=x;i++)
    {
        for(j=1;j<=x;j++)
        {
            if(j==1 || j==x || i==(x/2)+1)
                {
                printf(" * ");
                }
                else
                {


                    printf("   ");

                }
            }
            printf("\n");
        }



getch();
return 0;
}
