#include<stdio.h>
int main ()
{
    double tax,rate,salary;
    scanf("%lf",&salary);

    if(salary<=1350&&salary>850)
        rate=0.05;
    if(salary<=2850&&salary>1350)
        rate=0.1;
    if(salary<=5850&&salary>2850)
        rate=0.15;

    if(salary>5850)
        rate=0.2;

    tax=rate*(salary-850);
    if(tax<0)
        tax=0;
    printf("%.2lf",tax);
}
