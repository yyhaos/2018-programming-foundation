#include<stdio.h>
#include<string.h>
struct stu
{
    char num[30];
    char name[30];
    int score;
};

int main ()
{
    freopen("test.txt","r",stdin);
    struct stu stus[500];
    int th=0;
    char tem_num[30];
    while(1)
    {
        gets(tem_num);
       // printf("=%s\n",tem_num);
        if(strcmp(tem_num,"0")==0)
        {
            int t_num;
            scanf("%d", &t_num);
            for(int i=0;i<th;i++)
            {
                if(stus[i].score>=t_num)
                {
                    printf("%s\n%s\n%d\n",stus[i].num,stus[i].name,stus[i].score);
                }
            }
            break;
        }
        strcpy(stus[th].num,tem_num);
       // printf("==%s\n",stus[th].num);
        scanf("%s\n%d\n",stus[th].name,&stus[th].score);
        th++;

    }
    return 0;
}
