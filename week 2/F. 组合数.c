#include<stdio.h>
#include<math.h>
int f(int x)
{
    int i,ans;

    for(i=1 , ans=1; i<=x ; i++)
    {
        ans*=i;
    }
    return ans;
}
int main ()
{
    int n , m ;

    scanf("%d %d",&m,&n);
    printf("%d",f(n)/f(m)/f(n-m));
    return 0;
}


