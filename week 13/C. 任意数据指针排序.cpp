#include<stdio.h>
#include<stdlib.h>
//Problem   :   http://acm.bnu.edu.cn/v3/contest_show.php?cid=9427#problem/C
void swap(int **a, int **b)
{
    int *tem=*a;
    *a=*b;
    *b=tem;
}
int main ()
{
    int t, n ,i, j, *p, **pp;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        p=(int *)malloc(100+n*sizeof(int *));
        pp=(int **)malloc(100+n*sizeof(int **));
        for(i=0;i<n;i++)
        {
            scanf("%d",p+i);
            pp=&(p);
        }
        for(i=0;i<n;i++)
        {
            int tem_min=*(p+i);
            int tem_th=i;
            for(j=i+1;j<n;j++)
            {
                if(tem_min>*(p+j))
                {
                    tem_min=*(p+j);
                    tem_th=j;
                }
            }
            swap(pp+i,pp+tem_th);
            for(j=0;j<n;j++)
            {
                if(j)
                    printf("-");
                printf("%d", **(pp+j));
            }
            printf("\n");
        }
        for(i=0;i<n;i++)
        {
            if(i)
                printf(" ");
            printf("%d", **(pp+i));
        }
        free(p);
    }
    return 0;
}
