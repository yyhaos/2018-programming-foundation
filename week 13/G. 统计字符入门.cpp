#include<stdio.h>
//Problem   :   http://acm.bnu.edu.cn/v3/contest_show.php?cid=9427#problem/G
int judge(char tem)
{
    if((tem>='a' && tem<='z') || (tem>='A' && tem<='Z'))
        return 0;
    else if(tem==' ')
        return 1;
    else if(tem>='0' && tem<='9')
        return 2;
    else
        return 3;
}
int main ()
{
    //freopen("test.txt","r",stdin);
    int judge(char tem);
    long long i, cnt[5];
    for(i=0;i<5;i++)
    {
        cnt[i]=0LL;
    }
    char tem;
    while(~scanf("%c",&tem))
    {
        if(tem=='\n')
            break;
        cnt[judge(tem)]++;
    }
    for(i = 0 ; i<4;i++)
    {
        if(i)
            printf(" ");
        printf("%lld",cnt[i]);
    }
    return 0;
}
