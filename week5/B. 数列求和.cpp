#include<stdio.h>
long long f(long long a,long long n)
{
    long long ans=0,i,tem=1;
    for(i=1;i<=n;i++)
    {
        ans+=tem*a;
        tem=tem*10+1;
    }
    return ans;
}
int main ()
{
    long long a,n;
    scanf("%lld %lld",&a,&n);
    printf("%lld",f(a,n));
    return 0;
}
