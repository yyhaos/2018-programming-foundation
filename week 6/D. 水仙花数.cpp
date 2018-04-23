#include<stdio.h>
int di(int n)
{
    int tem=n,sum=0,ans=1;
    while(tem>0)
    {
        sum+=(tem%10)*(tem%10)*(tem%10);
        tem/=10;
    }
    if(sum!=n)
        ans=0;
    return ans;
}
int main ()
{
    int di(int n);
    int m, n, i, flag=0,flag2, cnt;
    while(~scanf("%d%d",&m,&n))
    {
        flag2=0;
        cnt=0;
        for(i=m;i<=n;i++)
        {
            if(di(i))
            {
                if(flag2)
                    printf(" ");
                flag2=1;
                printf("%d",i);
            }
        }
        if(flag2==0)
            printf("no");
        printf("\n");
    }
    return 0;
}
