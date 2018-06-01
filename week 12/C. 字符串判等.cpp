#include<stdio.h>
//Problem   :   http://acm.bnu.edu.cn/v3/contest_show.php?cid=9417#problem/C
int main ()
{
    //freopen("test.txt","r",stdin);
    int i=0,j=0,len1=0,len2=0,flag=1;
    char tem1[105],tem2[105],tem;
    {
        while(~scanf("%c",&tem))
        {
            if(tem>='a' && tem<='z')
            {
                tem1[i++]=tem;
            }
            else if(tem>='A' && tem<='Z')
            {
                tem1[i++]=tem-'A'+'a';
            }
            else if(tem=='\n')
            {
                while(~scanf("%c",&tem))
                {
                    if(tem>='a' && tem<='z')
                    {
                        tem2[j++]=tem;
                    }
                    else if(tem>='A' && tem<='Z')
                    {
                        tem2[j++]=tem-'A'+'a';
                    }
                    else if(tem=='\n')
                    {
                        break;
                    }
                    else
                        continue;
                }
                len1=i;
                len2=j;
                flag=1;
                if(len1!=len2)
                    flag=0;
                else
                {
                    for(i=0;i<len1;i++)
                    {
                        if(tem1[i]!=tem2[i])
                            flag=0;
                        //printf("%c%c",tem1[i],tem2[i]);
                    }
                }
                i=j=0;
                if(flag)
                {
                    printf("yes\n");
                }
                else
                    printf("no\n");
                continue;
            }
            else
                continue;
        }
    }
    return 0;
}
