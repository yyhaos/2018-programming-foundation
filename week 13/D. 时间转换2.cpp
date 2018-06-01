#include<stdio.h>
//Problem   :   http://acm.bnu.edu.cn/v3/contest_show.php?cid=9424#problem/D
void trans(int hour,int minn,int sec,int pass)
{
    if(sec+pass<60)
    {
        sec=pass+sec;
    }
    else
    {
        int add_m=(sec+pass)/60;
        sec=(sec+pass)%60;
        if(add_m+minn<60)
        {
            minn+=add_m;
        }
        else
        {
            int add_h=(add_m+minn)/60;
            minn=(add_m+minn)%60;
            if(add_h+hour<24)
            {
                hour+=add_h;
            }
            else
            {
                hour=(add_h+hour)%24;
            }
        }
    }
     printf("%d:%d:%d",hour,minn,sec);
     return ;
}
int main ()
{
    int hour,minn,sec;
    scanf("%d:%d:%d",&hour,&minn,&sec);
    int pass;
    scanf("%d",&pass);
    trans(hour,minn,sec,pass);

    return 0;
}
