#include<stdio.h>
int prime(int m)
{
    if(m-2<0)
        return 0;
    int i, ans=1;
    for(i=2;i*i<=m;i++)
    {
        if(m%i==0)
        {
            ans=0;
            break;
        }
    }
    return ans;
}
int main ()
{
    int i, m, n, cnt=0, sum=0;
    scanf("%d%d",&m,&n);
    for(i=m;i<=n;i++)
    {
        if(prime(i))
        {
            cnt++;
            sum+=i;
        }
    }
    printf("%d %d",cnt,sum);
}
