#include<stdio.h>
//using namespace std;
int main ()
{
    int m;
    scanf("%d",&m);
    while(m--)
    {
        double tem;
        scanf("%lf",&tem);
        if(tem<0)
            printf("-1\n");
        if(tem==0)
            printf("0\n");
        if(tem>0)
            printf("1\n");
    }
    return 0;
}
