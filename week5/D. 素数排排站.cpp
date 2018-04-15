#include<stdio.h>
int main ()
{
    int maxx=5000,maxn=500;
    int m,n,i,j,th=0;
    int prime[maxn];
    int used[maxx];
    for(i=2;i<maxx;i++)
    {
        used[i]=0;
    }
    for(i=2;i<=505;i++)
    {
        if(used[i]==1)
            continue;
        else
        {
            prime[th++]=i;
            for(j=1;j*i<505;j++)
            {
                used[i*j]=1;
            }
        }
    }
    scanf("%d%d",&m,&n);
    th=0;
    int flag=0;
    for(i=0;i<=96;i++)
    {
        if(prime[i]>=m && prime[i]<=n)
        {
            if(flag==1)
            {
                if(th%6!=0)
                    printf(" ");
                else
                    printf("\n");
            }
            flag=1;
            th++;
            printf("%d",prime[i]);
        }

    }
    return 0;
}
