#include<stdio.h>
int main ()
{
    int d,m,d_th,year;
    char data[5][5]={"th","st","nd","rd"};
    scanf("%d\%d\%d",&m,&d,&year);
    char month[14][15]={"d1","January","February","March","April","May","June","July","August","September","October","November","December"};
    d_th=d%10;
    if((d>=11&&d<=13) || d_th>=4)
        d_th=0;
    if(year>=10)
        printf("Dated this %d%s day of %s, 20%d",d,data[d_th],month[m],year);
    else
        printf("Dated this %d%s day of %s, 200%d",d,data[d_th],month[m],year);
    return 0;
}
