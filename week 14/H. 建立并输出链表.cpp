//Problem   :   http://acm.bnu.edu.cn/v3/contest_show.php?cid=9435#problem/H
#include<stdio.h>
int main ()
{
    int n;
    scanf("%d",&n);
    int flag=0;
    for(int i=0;i<n;i++)
    {
        int tem1,tem2;
        scanf("%d%d",&tem1,&tem2);
        if(tem1==0)
            continue;
        else
        {
            if(tem1>0 && flag==1)
            {
                printf("+");
            }
            if(tem1<0)
                printf("-");
            flag=1;
            if(tem1>1)
                printf("%d",tem1);
            else if(tem1<-1)
                printf("%d",-tem1);
            if(tem2==0 && (tem1==1||tem1==-1))
            {
                printf("1");
            }
            else if(tem2==0)
            {
                continue;
            }
            else if(tem2>1)
                printf("x^%d",tem2);
            else
                printf("x");
        }
    }
    return 0;
}
