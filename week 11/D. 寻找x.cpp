#include<stdio.h>
int main()
{
    int a[6];
    for(int i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    int x;
    scanf("%d",&x);
    for(int i = 0;i<5;i++)
    {
        if(x>a[i]&& i==4)
        {
            printf("No\n");
            a[5]=x;
            for(int j=0;j<=5;j++)
            {
                if(j)
                    printf(" ");
                printf("%d",a[j]);
            }
            break;
        }
        if(x>a[i])
        {
            continue;
        }
        else if(x==a[i])
        {
            printf("Yes\n%d",i);
            break;
        }
        else
        {
            printf("No\n");
            for(int j = 5; j>=i;j--)
            {
                a[j]=a[j-1];
            }
            a[i]=x;
            for(int j=0;j<=5;j++)
            {
                if(j)
                    printf(" ");
                printf("%d",a[j]);
            }
            break;
        }

    }
    return 0;
}
