#include<stdio.h>
//using namespace std;
int main ()
{
    int cont[5];
    int n ,i;
    double tem;
    for(i=0;i<5;i++)
        cont[i]=0;
    scanf("%d",&n);
    while(n--)
    {
        scanf("%lf",&tem);
        tem=tem-50;
        if(tem<0)
            tem=0;
        if(tem==50)
            tem=49;
        int k=int(tem/10);
        cont[k]++;
    }
    for(i=0;i<5;i++)
        {
            printf("%d",cont[4-i]);
            if(i!=4)
                printf(" ");
        }
    return 0;

}
