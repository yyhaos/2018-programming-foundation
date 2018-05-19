#include<stdio.h>
double fact(long long n)
{
    double i, ans=1;
    for(i=2;i<=n;i++)
    {
        ans*=i;
    }
    return ans;
}
double ans(long long n)
{
    double ans=0, i;
    for(i=1;i<=n;i++)
    {
        ans+=1.0/fact(i);
    }
    return ans;
}
int main ()
{
    double fact(long long n);
    double ans(long long n);
    long long n, i, j;
    double ans_1=0, ans_2=0, ans_3=0;
    scanf("%lld",&n);
    //printf("%.4f",ans_1);
    for(i=1;i<=n;i++)
    {
        ans_1+=1.0/fact(i);
    }
    //printf("%.4f",ans_2);
    for(i=1;i<=n;i++)
    {
        double tem=1;
        for(j=2;j<=i;j++)
        {
            double jj=j;
            tem*=jj;
        }
        ans_2+=1.0/tem;
    }
    ans_3=ans(n);

    printf("%.4f",1+(ans_1+ans_2+ans_3)/3.0);
    return 0;
}
