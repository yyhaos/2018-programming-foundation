#include<stdio.h>
int main ()
{
    int n;
    scanf("%d",&n);
    printf("%d\n%d\n%d",n%10,n/10%10,n/100%10);
    return 0;
}

