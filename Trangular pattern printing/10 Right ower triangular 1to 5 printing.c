#include<stdio.h>
#include<conio.h>

int main()
{
    int i=0,j=0,k=0;

    for(i=1;i<=5;i++)
    {
        for(k=5;k>i;k--)
        {

            printf(" ");


        }

        for(j=1;j<=i;j++)
        {

           printf("%d",j);

        }

        printf("\n");

    }


return 0;

}
