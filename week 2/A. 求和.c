#include<stdio.h>
int main ()
{
    int m ,i , sum;

    scanf("%d",&m);
    for(i=m,sum=0 ; i<=100; i++)
    {
        sum+=i;
    }
    printf("%d",sum);
    return 0;
}
