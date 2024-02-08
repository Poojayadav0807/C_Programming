#include<stdio.h>
#include<conio.h>
int main()
{
int n1=0,n2=0;

printf("\n\n enter 1st no:");
scanf("%d",&n1);

printf("\n\n enter 2st no:");
scanf("%d",&n2);

if(n1>n2)
{
printf("\n %d number is greater than %d",n1,n2);

}
else{
printf("\n %d number is greater than %d",n2,n1);
}
getch();
return 0;
}
