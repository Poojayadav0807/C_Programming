#include<stdio.h>
#include<conio.h>
int main()
{
int num1=0,num2=0,temp=0;

printf("enter num1 :");
scanf("%d",&num1);
printf("enter num2 :");
scanf("%d",&num2);

printf("\n\nnumber before swapping %d %d", num1,num2);


temp=num1;
num1=num2;
num2=temp;
printf("\n\nnumber after swapping:%d %d",num1 ,num2);



getch();
return 0;
}
