#include<stdio.h>
int main ()
{
    int cnt=0;
    char tem[100000];
    //freopen("test.txt","r",stdin);
    while(~scanf("%s",tem))
    {
        cnt++;
    }
    printf("%d",cnt);
    return 0;
}
