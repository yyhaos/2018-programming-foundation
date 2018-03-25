#include<stdio.h>
#include<math.h>
int main ()
{
    double line_a,line_b,line_c;
    double area,perimeter,half_p;

    scanf("%lf%lf%lf",&line_a,&line_b,&line_c);
   // printf("%lf %lf %lf",line_a,line_b,line_c);
    perimeter=line_a+line_b+line_c;
    half_p=perimeter/2.0;
    area= half_p*( half_p-line_a)*( half_p-line_b)*( half_p-line_c);
    //printf("%lf",area);
    if(area<=0)
        printf("These sides do not correspond to a valid triangle");
    else
        printf("%.2lf %.2lf",sqrt(area),perimeter);
    return 0;
}
