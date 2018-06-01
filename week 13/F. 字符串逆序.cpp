#include<stdio.h>
//Problem   :   http://acm.bnu.edu.cn/v3/contest_show.php?cid=9427#problem/F
int main ()
{
    freopen("test.txt","r",stdin);
    int th=0;
    char tem[1005];
    char strs[1005][1005];
    while(~scanf("%s",strs[th++]));
    for(int i = 0 ; i<th;i++)
    {
        if(i!=0 && i!=th-1)
            printf(" ",i);
        printf("%s",strs[th-2-i]);
    }
    return 0;
}
