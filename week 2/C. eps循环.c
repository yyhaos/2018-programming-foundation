#include<stdio.h>
#include<math.h>
int main ()
{
    int m , i;
    double flag , eps , sum , item;

    scanf("%lf",&eps);
    item = 1;
    flag = 1;
    sum = 0;
    i = 1;
    while(fabs(item)>=eps)
    {
        item = 1.0/(3*i-2)*flag;
        sum += item;
        i++;
        flag*=-1;
    }
    printf("%.6f",sum);
    return 0;
}


