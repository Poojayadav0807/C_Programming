#include<stdio.h>
#include<conio.h>


int main()
{
    int i=0,n=0,sum=0;

    printf("\n Enter value of n =");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
    printf("%d+%d = " , sum,i);
    sum=sum+i;
    printf("%d\n",sum);

    }
    return 0;
}
