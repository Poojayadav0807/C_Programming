#include<stdio.h>
#include<conio.h>

void Add(void);

int main()
{
    Add();

    getch();
    return 0;
}



void Add()
{
    int N1 = 0, N2 = 0, Sum = 0;

    printf("\n Enter 1st Number : ");
    scanf("%d",&N1);
    printf("\n Enter 2nd Number : ");
    scanf("%d",&N2);

    Sum = N1 + N2;

    printf("\n Addition of %d & %d is = %d.", N1, N2, Sum);

    return;
}
