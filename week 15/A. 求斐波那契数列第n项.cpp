#include<stdio.h>
//Problem   :   http://acm.bnu.edu.cn/v3/contest_show.php?cid=9435#problem/A
int F(int n)
{
    if(n<=2)
        return 1;
    else
        return F(n-1)+F(n-2);
}

int main ()
{
    int F(int n);
    int x;
    scanf("%d",&x);
    printf("%d",F(x));
    return 0;
}
