#include<stdio.h>
#include<conio.h>

int main()
{
int num1=0,num2=0,num3=0,div=0;

printf("enter num1:");
scanf("%d",&num1);

printf("enter num2:");
scanf("%d",&num2);

printf("enter num3:");
scanf("%d",&num3);

 div=num1/num2/num3;

printf("sum is %d",div);
getch();

return 0;
}
