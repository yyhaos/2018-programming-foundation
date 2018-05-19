#include<stdio.h>
//Problem   :   http://acm.bnu.edu.cn/v3/contest_show.php?cid=9411#problem/E
int main ()
{
    int n,a[35][35];
    for(int i = 1 ; i<=30;i++)
    {
        for(int j = 1 ;j<=i;j++)
        {
            if(j==1 || i==j)
            {
                a[i][j]=1;
                continue;
            }
            else
            {
                a[i][j]=a[i-1][j-1]+a[i-1][j];
            }
        }
    }
    while(~scanf("%d",&n))
    {
        for(int i = 1 ; i<=n;i++)
        {
            if(i!=1)
                printf("\n");
            for(int j = 1 ;j<=i;j++)
            {
                if(j!=1)
                    printf(" ");
                printf("%d",a[i][j]);
            }
        }
        printf("\n\n");
    }
    //printf("\n");
    return 0;
}
