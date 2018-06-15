#include<stdio.h>
int main ()
{
    int a[10000];
    int tem, th=0;
    while(scanf("%d",&tem))
    {
        if(tem==-1)
        {
            for(int i=0;i<th;i++)
                if(a[i]%2==1)
                printf("%d\n", a[i]);
            break;
        }
        a[th++]=tem;
    }
    printf("%d", -1);
    return 0;
}
