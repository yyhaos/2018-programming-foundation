#include<stdio.h>
int main ()
{
    int n , i , maxn , index_max , minn,index_min , tem;

    maxn = -999999;
    minn = -maxn;
    scanf("%d",&n);
    for (i = 0 ; i < n ; i ++)
    {
        scanf("%d",&tem);
        //printf("%d\n",tem);
        if(maxn<=tem)
        {
            maxn = tem ;
            index_max = i;
        }
        if(minn>=tem)
        {
            minn = tem ;
            index_min = i;
        }
    }
    printf("%d %d\n",minn,index_min);
    printf("%d %d\n",maxn,index_max);
    return 0;
}
