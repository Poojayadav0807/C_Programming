#include<stdio.h>
#include<conio.h>

void Add(int, int);

int main()
{
    int N1 = 0, N2 = 0;

    printf("\n Enter 1st Number : ");
    scanf("%d",&N1);
    printf("\n Enter 2nd Number : ");
    scanf("%d",&N2);

    Add(N1, N2);

    getch();
    return 0;
}



void Add(int Num1, int Num2)
{
    int Sum = 0;

    Sum = Num1 + Num2;

    printf("\n Addition of %d & %d is = %d.", Num1, Num2, Sum);

    return;
}
