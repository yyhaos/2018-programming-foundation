#include<stdio.h>
int factorsum(int number)
{
    if(number==1)
        return 0;
    int i, ans=1;
    for(i=2;i<number/i;i++)
    {
        //printf("!%d%%%d=%d\n",number,i,!(number%i));
        if(!(number%i))
        {
            ans+=i+number/i;
        }
    }
    return ans;
}
int main ()
{
    //printf("\%");
    int i,n ,m, flag=0;
    int factorsum(int number);
    scanf("%d%d",&m,&n);
    for(i=m;i<n;i++)
    {
        if(i==factorsum(i))
        {
            if(flag)
            {
                printf(" ");
            }
            printf("%d",i);
            flag=1;
        }
    }
    return 0;
}
