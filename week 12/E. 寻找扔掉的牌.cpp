#include<stdio.h>
//Problem   :   http://acm.bnu.edu.cn/v3/contest_show.php?cid=9417#problem/E
int main ()
{
    char cards[50]="2,3,4,5,6,7,8,9,10,J,Q,K,A";
    int i,not_droped[200];
    char tem;
    for(i=0;i<200;i++)
        not_droped[i]=i;
    while(~scanf("%c",&tem))
    {
        not_droped[tem]=0;
    }
    not_droped[',']=0;
    for(i=0;cards[i];i++)
    {
        if(not_droped[cards[i]])
            putchar(cards[i]);
    }
    return 0;
}
