#include<stdio.h>
#include<math.h>
int main ()
{
    int n , i , item;

    scanf("%d",&n);
    for(i=0; i<=n; i++)
    {
        item=pow(3.0,i);
        printf("%d",item);
        if(i!=n)
            printf(" ");
    }
    return 0;
}

