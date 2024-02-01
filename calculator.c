#include<stdio.h>
#include<conio.h>

int main ()
{
int num1=0,num2=0;
char operator=0;



printf("\n\nenter a operator(+,-,*,/):");
scanf("%c",&operator);

printf("\n\nenter num1 ,num2");
scanf("%d%d",&num1,&num2);

switch(operator)
{

case '+':
    printf("%d+%d=%d",num1,num2,num1+num2);
break;

case '-':
    printf("%d-%d=%d",num1,num2,num1-num2);
break;

case '*':
    printf("%d*%d=%d",num1,num2,num1*num2);
break;

case '/':
    printf("%d/%d=%d",num1,num2,num1/num2);
break;

default:
printf("enter correct values");

getch();
return 0;
}
}
