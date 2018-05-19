#include<stdio.h>
//Problem   :   http://acm.bnu.edu.cn/v3/contest_show.php?cid=9411#problem/A
int main ()
{
    int n;
    scanf("%d",&n);
    int a[n][n],b[n][n];
    for(int i = 0 ;i<n;i++)
    {
        for(int j = 0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(int i = 0 ;i<n;i++)
    {
        for(int j = 0;j<n;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    int add[n][n],sub[n][n];
    for(int i = 0 ;i<n;i++)
    {
        for(int j = 0;j<n;j++)
        {
           add[i][j]=a[i][j]+b[i][j];
        }
    }
    for(int i = 0 ;i<n;i++)
    {
        for(int j = 0;j<n;j++)
        {
            sub[i][j]=a[i][j]-b[i][j];
        }
    }
    for(int i = 0 ;i<n;i++)
    {
        if(i)
            printf("\n");
        for(int j = 0;j<n;j++)
        {
            if(j)
                printf(" ");
            printf("%d",add[i][j]);
        }
    }
    return 0;
}
