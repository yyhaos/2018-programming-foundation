    #include<stdio.h>
    //Problem   :   http://acm.bnu.edu.cn/v3/contest_show.php?cid=9411#problem/C
    int main ()
    {
        int n;
        scanf("%d",&n);
        for(int i = 1 ; i<=n;i++)
        {
            if(i>1)
                printf("\n");
            for(int j = 1 ;j<=i;j++)
            {
                if(j>1)
                    printf(" ");
                printf("%d",i*j);
            }
        }
        return 0;
    }
