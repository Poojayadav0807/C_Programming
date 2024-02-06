#include<stdio.h>
#include<conio.h>

int main()
{
  int Num=0,temp=0,odd_count=0,even_count=0,zero_count=0,dig=0;

  printf("\n Enter a number :");
  scanf("%d",&Num);

  temp=Num;

  while(temp!=0)
  {
    dig=temp%10;


    if(dig==0)
    {
      zero_count++;
    }

    else if(dig%2==0)
    {
      even_count++;
    }

    else
      {
      odd_count++;
      }

    temp=temp/10;
  }


     printf("\n\n zero_count in %d=%d",Num,zero_count);
     printf("\n\n even_count in %d=%d",Num,even_count);
     printf("\n\n odd_count in %d=%d",Num,odd_count);


     getch();
     return 0;
}
