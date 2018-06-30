#include<stdio.h>
int main ()
{
    printf("%c%c%c%c", 'A', '\101', '\x41', 65);
    //101(8)==65(10)==41(16)
    return 0;
}
