//Problem   :   http://acm.bnu.edu.cn/v3/contest_show.php?cid=9435#problem/D
#include<stdio.h>
#include<string.h>
int main ()
{
    char *w[10]={"Sunday","Monday","Tuesday","Wednesday","Thursday","Friday","Saturday"};
    char str[20];
    scanf("%s",str);
    int ans=-1;
    for(int i=0;i<7;i++)
    {
        if(strcmp(str,w[i])==0)
        {
            ans=i;
        }
    }
    printf("%d",ans);
}
