#include<stdio.h>
//Problem   :   http://acm.bnu.edu.cn/v3/contest_show.php?cid=9427#problem/D
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
    scanf("%c",&c);
    for(int i = 0 ; str[i];i++)
    {
        if(c==str[i])
            continue;
        printf("%c",str[i]);
    }
    return 0;
}
