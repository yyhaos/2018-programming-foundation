#include<stdio.h>
int istype(char tem)
{
    int ans;
    if(tem>='a' && tem<='z')
        return 1;
    else if(tem>='A' && tem<='Z')
        return 1;
    else if(tem>='0' && tem<='9')
        return 2;
    else return 0;
}
int mymax(int a,int b)
{
    if(a<b)
        a=b;
    return a;
}
int main ()
{
    int cnt[3],i,tem_cnt=1,flag=1;
    int istype(char tem);
    int mymax(int a,int b);
    for(i=0;i<3;i++)
    {
        cnt[i]=0;
    }
    char tem,last;
    scanf("%c",&tem);
    while (1)
    {
        if(tem=='\n')
        {
            cnt[istype(last)]=mymax(cnt[istype(last)],tem_cnt);
            break;
        }
        if(flag==0)
        {
            if(istype(last)==istype(tem))
            {
                tem_cnt++;
            }
            else
            {
                cnt[istype(last)]=mymax(cnt[istype(last)],tem_cnt);
                tem_cnt=1;
            }
        }
        else
            flag=0;
        last=tem;
        scanf("%c",&tem);
    }
    printf("%d",mymax(cnt[0],mymax(cnt[2],cnt[1])));
}
