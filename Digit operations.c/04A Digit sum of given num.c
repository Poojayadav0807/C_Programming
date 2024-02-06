#include<stdio.h>
#include<conio.h>

int main()
{
  int Num=0,temp=0,dig=0,Digitsum=0;

  printf("\n Enter a number :");
  scanf("%d",&Num);

  temp=Num;

  while(temp!=0)
  {

    Digitsum=Digitsum+(temp%10);
    temp=temp/10;
  }



     printf("\n\n Digit sum in %d=%d",Num,Digitsum);

     getch();
     return 0;
}
