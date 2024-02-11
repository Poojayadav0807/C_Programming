#include<stdio.h>
#include<conio.h>

int main()
{

int i=0,j=0,x=0;

printf("enter no.of rows and column   :");
scanf("%d",&x);

for(i=1;i<=x;i++)
{
for(j=1;j<=x;j++)
{

printf(" * ");
}
printf("\n");
}

getch();
return 0;
}
