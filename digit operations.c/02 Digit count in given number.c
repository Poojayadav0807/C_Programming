#include<stdio.h>
#include<conio.h>

int main()
{
  int Num=0,temp=0,Digitcount=0;

  printf("\n Enter a number :");
  scanf("%d",&Num);

  temp=Num;

  while(temp>0)
  {
    Digitcount++;
    temp=temp/10;
  }



     printf("\n\n Digit count in %d=%d",Num,Digitcount);

     getch();
     return 0;
}
