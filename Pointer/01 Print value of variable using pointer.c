#include<stdio.h>
#include<conio.h>


int main()
{
    int x=5;
    int *p;

    p=&x;

    printf("Value of x before incremenet:%d",x);

    *p=*p+1;

    printf("\n Value of x after increment :%d",x);

    return 0;


}
