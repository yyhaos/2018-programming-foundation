#include<stdio.h>
//Problem   :   http://acm.bnu.edu.cn/v3/contest_show.php?cid=9408#problem/E
int main ()
{
    int tem,i,j,ans[10],sto[10],cnt,cnt2;
    cnt=0;
    cnt2=0;
    for(i=0;i<10;i++)
    {
        scanf("%d",&tem);
        if(tem%2)
        {
            ans[cnt++]=tem;
        }
        else
            sto[cnt2++]=tem;
    }
    for(i=0;i<cnt;i++)
    {
        for(j=0;j<cnt-i-1;j++)
        {
            if(ans[j]<ans[j+1])
            {
                tem=ans[j];
                ans[j]=ans[j+1];
                ans[j+1]=tem;
            }
        }
    }
    for(i=0;i<cnt2;i++)
    {
        for(j=0;j<cnt2-i-1;j++)
        {
            if(sto[j]<sto[j+1])
            {
                tem=sto[j];
                sto[j]=sto[j+1];
                sto[j+1]=tem;
            }
        }
    }
    for(i=cnt;i<cnt+cnt2;i++)
    {
        ans[i]=sto[i-cnt];
    }
    for(i=0;i<10;i++)
    {
        if(i)
            printf(" ");
        printf("%d",ans[i]);
    }
    return 0;
}
