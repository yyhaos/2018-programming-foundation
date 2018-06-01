#include<stdio.h>
//Problem   :   http://acm.bnu.edu.cn/v3/contest_show.php?cid=9408#problem/C
int main ()
{
    int n,a[15];
    scanf("%d",&n);
    int maxx=1<<31,minn=maxx-1,maxx_index,minn_index;

    for(int i= 0;i<n;i++)
    {
        scanf("%d",&a[i]);
        if(maxx<a[i])
        {
            maxx=a[i];
            maxx_index=i;
        }
        if(minn>a[i])
        {
            minn=a[i];
            minn_index=i;
        }
    }
    int tem=a[0];
    a[0]=minn;
    a[minn_index]=tem;
    if(maxx_index==0)
    {
        maxx_index=minn_index;
    }
    tem=a[n-1];
    a[n-1]=maxx;
    a[maxx_index]=tem;

    for(int i= 0;i<n;i++)
    {
        if(i)
            printf(" ");
        printf("%d",a[i]);
    }

    return 0;
}
