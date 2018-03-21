#include<stdio.h>
int main ()
{
    int time_1,time_2;

    scanf("%d%d",&time_1,&time_2);
    printf("%d",-time_1/100%100*60-time_1%100+time_2/100%100*60+time_2%100);
    return 0;
}
