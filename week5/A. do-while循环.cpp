#include<stdio.h>
int main ()
{
    int n,cnt=0,num=0;
    scanf("%d",&n);
    do
    {
        cnt+=n%10;
        n/=10;
        num++;
    } while(n!=0);
    printf("%d %d",num,cnt);
    return 0;
}
