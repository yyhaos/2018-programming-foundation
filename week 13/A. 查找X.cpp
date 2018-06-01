#include<stdio.h>
//Problem   :   http://acm.bnu.edu.cn/v3/contest_show.php?cid=9427#problem/A
int search(int a[],int n,int x)
{
    for(int i = 0;i<n;i++)
    {
        if(a[i]==x)
            return i;
    }
    return -1;
}
int main ()
{
    int search(int a[],int n,int x);
    int i, n;

    scanf("%d",&n);
    int a[15];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int x;
    scanf("%d",&x);
    if(search(a,n,x)!=-1)
    {
        printf("%d",search(a,n,x));
    }
    else
        printf("Not found");
    return 0;
}
