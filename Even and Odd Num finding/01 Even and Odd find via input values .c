#include<stdio.h>
#include<conio.h>
int main()
{
int num=0;

printf("enter num:");
scanf("%d",&num);

if(num%2==0)
{
printf("number is even");
}
else
printf("number is odd");
getch();
return 0;
}
