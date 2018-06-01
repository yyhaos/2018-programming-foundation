#include<stdio.h>
//Problem   :   http://acm.bnu.edu.cn/v3/contest_show.php?cid=9408#problem/B
int main ()
{
    int n,a[15];
    scanf("%d",&n);
    int maxx=1<<31,minn=maxx-1,maxx_index,minn_index;
    //printf("%d %d",maxx,minn);
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
    printf("%d %d\n%d %d",minn,minn_index,maxx,maxx_index);
    return 0;
}
