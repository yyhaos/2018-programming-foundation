#include<stdio.h>
//Problem   :   http://acm.bnu.edu.cn/v3/contest_show.php?cid=9427#problem/E
int main ()
{
    char str[500000];
    int th=0;
    char c;
    while(~scanf("%c",&c))
    {
        if(c=='\n')
            break;
        else
            str[th++]=c;
    }
    str[th]='\0';
    for(int i = 0 ; 2*i<=th;i++)
    {
        if(str[i]==str[th-1-i])
            continue;
        else
        {
            printf("No\n");
            return 0;
        }
    }
    printf("Yes\n");
    return 0;
}
