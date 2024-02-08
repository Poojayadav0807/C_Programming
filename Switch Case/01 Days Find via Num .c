#include<stdio.h>
#include<conio.h>

int main ()
{
int day=0;

printf("enter day(1-7)");
scanf("%d",&day);

switch(day)
{

case 1:
    printf("monday");
break;

case 2:
    printf("thuesday");
break;

case 3:
    printf("wensday");
break;

case 4:
    printf("thusday");
break;

case 5:
    printf("friday");
break;

case 6:
    printf("saterday");
break;

case 7:
    printf("sunday");
break;

default:
    printf("invalid number");

}
getch();
return 0;

}
