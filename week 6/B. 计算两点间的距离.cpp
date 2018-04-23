#include<stdio.h>
#include<math.h>
double dis(double x1,double y1,double x2,double y2)
{
    return sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
}
int main ()
{

    double dis(double x1,double y1,double x2,double y2);
    double x1,x2,y1,y2;
    while(~scanf("%lf%lf%lf%lf",&x1,&y1,&x2,&y2))
    {
        printf("%.2lf\n",dis(x1,y1,x2,y2));
    }
    return 0;
}
