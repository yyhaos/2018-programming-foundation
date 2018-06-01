#include<stdio.h>
//Problem   :   http://acm.bnu.edu.cn/v3/contest_show.php?cid=9424#problem/A
int main ()
{
    int year,month,day;
    scanf("%d-%d-%d",&year,&month,&day);
    int mon[15]={0,31,28,31,30,31,30,31,31,30,31,30,31};
    for(int i=2;i<=12;i++)
        mon[i]+=mon[i-1];
    if((year%4==0 && year%100!=0)||(year%400==0))
        year=1;
    else
        year=0;
    if(month<=2)
        year=0;
    printf("%d\n",mon[month-1]+day+year);
    return 0;
}
