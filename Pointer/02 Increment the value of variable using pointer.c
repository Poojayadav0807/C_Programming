#include<stdio.h>
#include<conio.h>


int main()
{
    int x=5;
    int *p,**q;

    p=&x;
    q=&p;
    printf("\n value of a:%d",**q)
    return 0;


}
