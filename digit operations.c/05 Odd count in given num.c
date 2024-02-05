#include<stdio.h>
#include<conio.h>

int main()
{
  int Num=0,temp=0,odd_count=0,dig=0;

  printf("\n Enter a number :");
  scanf("%d",&Num);

  temp=Num;

  while(temp!=0)
  {
    dig=temp%10;

      if( (dig%2)==1)
      {
      odd_count++;
      }
    temp=temp/10;
  }



     printf("\n\n odd_count in %d=%d",Num,odd_count);

     getch();
     return 0;
}
