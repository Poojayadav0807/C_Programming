#include<stdio.h>
#include<conio.h>

int main()
{
  int num[5]={} ,i=0;

    for(i=0;i<5;i++)
    {

        printf("\n Element num %d=%d" ,i+101,num[i]);

    }

    getch();

    printf("\n\n enter 5 array elements = \n");

    for(i=0;i<5;i++)
    {

     printf("\n enter %d element : ",i+1);
     scanf("%d",num[i]);

    }
    getch();

    printf("\n given array elements are=\n ");

    for(i=0;i<5;i++)
    {
      printf("\n element number %d=%d", i+1001,num[i]);
    }

getch();
return 0;
}
