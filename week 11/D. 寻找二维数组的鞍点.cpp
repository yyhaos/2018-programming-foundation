#include<stdio.h>
//Problem   :   http://acm.bnu.edu.cn/v3/contest_show.php?cid=9411#problem/D
int  main ()
{
    int a[5][6];
    for(int i = 0;i<5;i++)
    {
        for(int j=0;j<6;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    int cnt=0;
    for(int i = 0;i<5;i++)
    {
        for(int j=0;j<6;j++)
        {
            int flag=0;
            for(int k=0;k<5;k++)
            {
                if(a[k][j]<a[i][j])
                    flag=1;
            }
            for(int k=0;k<6;k++)
            {
                if(a[i][k]>a[i][j])
                    flag=1;
            }
            if(flag)
                continue;
            cnt++;
            if(cnt>1)
                printf("\n");
            printf("%d %d",i+1,j+1);
        }
    }
    if(cnt==0)
        printf("none");
    return 0;
}
