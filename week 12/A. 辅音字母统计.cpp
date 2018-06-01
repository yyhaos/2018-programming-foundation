#include<stdio.h>
//Problem   :   http://acm.bnu.edu.cn/v3/contest_show.php?cid=9417#problem/A
int main ()
{
    //freopen("test.txt","r",stdin);
    char tem[90];
    int i=0,cnt=0;
    while(scanf("%c",&tem[i++]))
        if(tem[i-1]=='\n')break;
    tem[i]='\0';
    for(i=0;tem[i];i++)
    {
        if(tem[i]>='B' && tem[i]<='Z')\
        {
            if(tem[i]=='E' || tem[i]=='I' || tem[i]=='O' || tem[i]=='U')
                continue;
            cnt++;
        }
    }
    printf("%d",cnt);
    return 0;
}
