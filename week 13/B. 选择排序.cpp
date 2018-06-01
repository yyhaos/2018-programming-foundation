#include<stdio.h>
//Problem   :   http://acm.bnu.edu.cn/v3/contest_show.php?cid=9427#problem/B
void sort(int a[], int n)
{
    int i, tem_th, j, tem_min;
    for(i=0;i<n;i++)
    {
        tem_min=a[i];
        tem_th=i;
        for(j=i+1;j<n;j++)
        {
            if(tem_min>a[j])
            {
                tem_min=a[j];
                tem_th=j;
            }
        }
        a[tem_th]=a[i];
        a[i]=tem_min;
    }
}
int main ()
{
    void sort(int a[], int n);
    int n, i;
    int a[10005];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    sort(a,n);
    for(i=0;i<n;i++)
    {
        if(i)
            printf(" ");
        printf("%d",a[i]);
    }
    return 0;
}
