#include<stdio.h>
//http://www.bnuoj.com/v3/contest_show.php?cid=9384#problem/A
int even(int n)
{
    if(n%2)
    {
        return 1;
    }
    return 0;
}
int main ()
{
    int even(int n);
    int tem, ans=0;
    while(scanf("%d",&tem))
    {
        if(tem<=0)
            break;
        else if(even(tem))
        {
            ans+=tem;
        }
    }
    printf("%d",ans);
    return 0;
}
