#include<stdio.h>
#include<conio.h>

int main()
{
  int Num=0,temp=0,Reverse=0;

  printf("\n Enter a number :");
  scanf("%d",&Num);

  temp=Num;

  while(temp!=0)
  {
    Reverse=(Reverse*10)+(temp%10);
    temp=temp/10;
  }



     printf("\n\n Reverse of %d=%d",Num,Reverse);

     getch();
     return 0;
}
