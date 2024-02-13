///Function with argument and  return type

# include<stdio.h>
#include<conio.h>


int sum(int,int);

int main()
{
    int a,b,res;

    printf("\nEnter a number :");
    scanf("%d",&a);

    printf("\nEnter a number :");
    scanf("%d",&b);

    res=sum(a,b);

    getch();
    return 0;





}

int sum(int num1,int num2)
{
    int sum=0;
    sum= num1+num2;
    printf("\n Sum of %d and %d =%d",num1,num2,sum);

    return sum ;

}
