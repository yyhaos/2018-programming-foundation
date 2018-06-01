#include<stdio.h>
int fib(int n)
{
    if(n-3<0)
        return 1;
    return fib(n-1)+fib(n-2);
}
int main ()
{
    int fib(int n);
    int m ,n, i, tem, flag=0;
    scanf("%d%d",&m,&n);
    for(i=2;i<=20;i++)
    {
        tem=fib(i);
        if(tem>=m&&tem<=n)
        {
            if(flag++)
            {
                printf(" ");
            }
            printf("%d",tem);
        }

    }
    return 0;
}
