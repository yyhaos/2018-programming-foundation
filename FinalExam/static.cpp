#include<stdio.h>
//static means still/inactive/inert
int f(int n)    //with static
{
    static int ff=1;    //static only work in this .cpp file , see static_2 for example
    ff=n*ff;
    return ff;
}

int f_2(int n)  //without static
{
    int ff=1;
    ff=n*ff;
    return ff;
}

int main ()
{
    int f(int n);
    int f_2(int n);
    for(int i=1;i<=4;i++)
    {
        printf("%d ",f(i));
    }
    puts("");
    //  result  :   1 2 6 24
    for(int i=1;i<=4;i++)
    {
        printf("%d ",f_2(i));
    }
    //  result  :   1 2 3 4
    return 0;
}
