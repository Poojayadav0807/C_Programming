#include<stdio.h>
#include<conio.h>

int main()
{

int i=0,j=0,x=0;

printf("\n\nenter no.of rows and column   :");
scanf("\n\n%d",&x);

for(i=1;i<=x;i++)
{
for(j=1;j<=x;j++)
{
if(j==1 || j==x || i+j==x+1)
{

printf(" * ");
}

else
{
printf("   ");
}
}
printf("\n");
}

getch();
return 0;
}
