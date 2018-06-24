//Problem   :   http://acm.bnu.edu.cn/v3/contest_show.php?cid=9435#problem/C
#include<stdio.h>
char* m[15]={"January","February","March","April","May","June","July","August","September","October","November","December"};

int main ()
{
    int n;
    scanf("%d",&n);
    printf("%s\n",m[n-1]);
    return 0;
}
