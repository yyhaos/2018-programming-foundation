#include<stdio.h>
#include<string.h>
//Problem   :   http://acm.bnu.edu.cn/v3/contest_show.php?cid=9417#problem/D
int main ()
{
    int i,th=5,j,maxnlen=0;
    char st,tem[500000],maxn[500000];
    while(th--)
    {
        i=0;
        while(~scanf("%c",&st))
        {
            tem[i++]=st;
            if(st=='\n')
            {
                tem[i]='\0';
                if(maxnlen<i)
                {
                    strcpy(maxn,tem);
                    maxnlen=i;
                }
                break;
            }
        }
        tem[i]='\0';
        if(maxnlen<i)
        {
            strcpy(maxn,tem);
            maxnlen=i;
        }
    }
    printf("%s",maxn);
}
