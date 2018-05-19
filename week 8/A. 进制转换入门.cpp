#include<stdio.h>
//Problem   :   http://acm.bnu.edu.cn/v3/contest_show.php?cid=9408#problem/0int main ()
{
    int n;
    char eight[1000],six[1000],flag=1;
    scanf("%d",&n);
    int cnt=0,tem=n;
     if(n==0)
    {
        printf("0\n0");
        return 0;
    }
    if(n<0)
    {
        flag=-1;
        n=-n;
    }
    cnt=0,tem=n;

    while(tem>0)
    {
        eight[cnt++]='0'+tem%8;
        tem=tem/8;
    }
    if(flag==-1)
    {
        printf("-");
    }
    for(int i = cnt-1;i>=0;i--)
    {
        printf("%c",eight[i]);
    }
    printf("\n");

    cnt=0;
    tem=n;

    while(tem>0)
    {
        char t;
        int k = tem%16;
        if(k>=10)
            t=k-10+'A';
        else
            t=k+'0';
        six[cnt++]=t;
        tem=tem/16;
    }
    if(flag==-1)
    {
        printf("-");
    }
    for(int i = cnt-1;i>=0;i--)
    {
        printf("%c",six[i]);
    }
    return 0;
}
