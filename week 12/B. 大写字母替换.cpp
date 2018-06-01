#include<stdio.h>
//Problem   :   http://acm.bnu.edu.cn/v3/contest_show.php?cid=9417#problem/B
int main ()
{
    char tem;
    while(~scanf("%c",&tem))
    {
        if(tem>='A' && tem<='Z')
        {
            putchar(25-(tem-'A')+'A');
        }
        else
            putchar(tem);
    }
    return 0;
}
