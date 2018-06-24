#include<stdio.h>
//Problem   :   http://acm.bnu.edu.cn/v3/contest_show.php?cid=9435#problem/B
float power(float x, int n)
{
    if(n==0)
        return 1;
    if(n==1)
        return x;
    else
        return x*power(x,n-1);
}

int main ()
{
    float power (float x, int n);
    float xx;
    int nn;
    scanf("%f\n%d",&xx,&nn);
    printf("%f", power(xx,nn));
    return 0;
}
