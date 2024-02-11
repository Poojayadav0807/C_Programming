#include<stdio.h>
#include<conio.h>

int main()
{
    int No=0;

    printf("Enter a number :");
    scanf("%d",&No);


    if(No%5==0 && No%7==0)
    {
        printf("number is divisible by 5 and 7");

    }
    else if(No%5==0)
    {
         printf("number is divisible by 5");

    }

     else if(No%7==0)
    {
         printf("number is divisible by 7");

    }

    else
    {
      printf("number is not divisible by 5 and 7") ;

    }
    getch();
    return 0;
}
