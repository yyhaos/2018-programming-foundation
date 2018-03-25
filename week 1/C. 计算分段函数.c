#include<stdio.h>
#include<math.h>
int main ()
{
    int n;
    double x;
    double ans;

    scanf("%d",&n);
    while(n--)
    {
        scanf("%lf",&x);
        //printf("%d",x<0);
        ans =(x+1)*(x+1)+2*x+1/x;
        if(x>=0)
            ans=sqrt(x);
        printf("%.2lf",ans);
        if(n!=0)
            printf("\n");
    }
    return 0;
}
