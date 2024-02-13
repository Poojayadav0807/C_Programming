# include<stdio.h>
#include<conio.h>


void sum(void);

int main()
{
    sum();

    getch();
    return 0;





}

void sum(void)
{
    int num1=0,num2=0,sum=0;

    printf("enter number 1 :");
    scanf("%d",&num1);

     printf("enter number 2:");
    scanf("%d",&num2);

    sum= num1+num2;
    printf("\n Sum of %d and %d =%d",num1,num2,sum);

    return sum;

}
