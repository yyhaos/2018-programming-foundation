#include<stdio.h>
#include<string.h>
int max_len(char *s[ ], int n)
{
    int ans=-1;
    for(int i=0; i<n ; i++)
    {
      //  printf("%d\n",(int)strlen(s[i]));
        if(ans<(int)strlen(s[i]))
            ans=(int)strlen(s[i]);
    }
    return ans;
}

int main ()
{
    int max_len(char *s[ ], int n);
    char str[13][50000];
    char *sp[13];
    int nn;
    scanf("%d\n", &nn);
    for(int i=0;i<nn;i++)
    {
        gets(str[i]);
        sp[i]=&str[i][0];
    }
    printf("%d",max_len(sp,nn));
    return 0;
}
