#include<stdio.h>
int main ()
{
    int m , i;
    double sum , item;

    scanf("%d",&m);
    for(i=m,sum=0 ; i<=100; i++)
    {
        item=i*i+1.0/i;
        sum+=item;
    }
    printf("%.3f",sum);
    return 0;
}

