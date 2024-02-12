#include<stdio.h>
#include<conio.h>

int Add(void);

int main()
{
    int Res = 0;

    Res = Add();

    printf("\n Addition is = %d.", Res);

    getch();
    return 0;
}

int Add()
{
    int N1 = 0, N2 = 0, Sum = 0;

    printf("\n Enter 1st Number : ");
    scanf("%d",&N1);
    printf("\n Enter 2nd Number : ");
    scanf("%d",&N2);

    Sum = N1 + N2;

    return Sum;
}
