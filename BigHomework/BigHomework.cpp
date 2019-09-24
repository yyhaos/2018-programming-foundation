#include<stdio.h>
#include<string.h>
//stu = student, sub = subject, i,j are variables.
const int max_stu_number = 5000, max_sub_number = 15,\
            max_stu_name_len = 20,max_sub_name_len = 20;
int stu_number, sub_number;
char sub_name[max_sub_number+5][max_sub_name_len];

struct  stu
{
    char name[max_stu_name_len+5];
    float score[max_sub_number+5];
}stus[max_stu_number+5];

void Initialize()
{
    stu_number = 0;
    sub_number = 0;
    for(int i = 1 ; i<=max_stu_number;i++)
    {
        strcpy(stus[i].name,"Stu ");
        stus[i].name[4]='0'+i;
        stus[i].name[5]='\0';
    }
    for(int i = 1 ; i<=max_sub_number;i++)
    {
        strcpy(sub_name[i],"Sub ");
        sub_name[i][4]='0'+i;
        sub_name[i][5]='\0';
    }
    printf("Initialize finish\n");
    return ;
}

void Input()
{
    int n=0,m=0;
    printf("Input begin\n");
    while(n<=0 || n>max_stu_number)
    {
        printf("Input students total number( 1 <= x <= %d ) :\n",max_stu_number);
        scanf("%d", &n);
    }
    stu_number = n;
    while(m<=0 || m>max_sub_number)
    {
        printf("Input subjects total number( 1 <= x <= %d ) :\n",max_sub_number);
        scanf("%d", &m);
    }
    sub_number = m;
    for(int i = 1; i<=sub_number;i++)
    {
        printf("Input the name of subject %d :\n" ,i);
        scanf("%s", sub_name[i]);
    }
    for(int i = 1 ; i<=stu_number ; i++)
    {
        printf("Input No. %d student's name :\n", i);
        scanf("%s", stus[i].name);
        for(int j = 1 ; j<=sub_number ; j++)
        {
            printf("Input %d student's score of %s :\n", i, sub_name[j]);
            scanf("%f",&stus[i].score[j]);
        }
    }
    printf("Input finish\n");

    return ;
}

void PrintTitle()
{
    printf("Number\tName");
    for(int i = 1 ; i<=sub_number ; i++)
    {
        printf("\t%s", sub_name[i]);
    }
    printf("\n");
    return ;
}

void PrintStu(int number)
{
    printf("%d\t%s", number, stus[number].name);
    for(int j = 1 ;j<=sub_number;j++)
    {
        printf("\t%.1f", stus[number].score[j]);
    }
    printf("\n");
}

void SeeAllStudent()
{
    if(stu_number==0)
    {
        printf("No student recorded\n");
        return ;
    }
    printf("\nThere are %d students in total\n", stu_number);
    PrintTitle();
    for(int i = 1 ; i<=stu_number ; i++)
    {
        PrintStu(i);
    }
    return ;
}

void CountStuAverage()
{
    if(stu_number==0)
    {
        printf("No student recorded\n");
        return ;
    }
    printf("\nNumber\tName\tAverage\n");
    for(int i = 1; i<=stu_number ; i++)
    {
        float sum=0;
        for(int j = 1 ; j<=sub_number;j++)
        {
            sum+=stus[i].score[j];
        }
        printf("%d\t%s\t%.1f\n", i, stus[i].name, sum/stu_number);
    }
    return ;
}

void CountSubAverage()
{
    if(stu_number==0)
    {
        printf("No student recorded\n");
        return ;
    }
    printf("\nSubjects\tAverage\n");
    for(int i = 1 ;i<=sub_number;i++)
    {
        float sum=0;
        for(int j =1;j<=stu_number;j++)
        {
            sum+=stus[j].score[i];
        }
        printf("%s\t\t%.1f\n", sub_name[i], sum/stu_number);
    }
    return ;
}

void FindName(char name[])
{
    printf("\nBegin find \"%s\"\n", name);
    for(int i = 1 ; i<=stu_number; i++)
    {
        if(strcmp(name,stus[i].name)==0)
        {
            PrintTitle();
            PrintStu(i);
            return ;
        }
    }
    printf("No one called \"%s\" \n",name);
}

void FindSub(char name[])
{
    printf("\nBegin find \"%s\"\n", name);
    for(int i = 1 ; i<=sub_number; i++)
    {
        if(strcmp(sub_name[i], name)==0)
        {
            printf("Number\tName\t%s\n", name);
            for(int j=1; j<=stu_number;j++)
            {
                printf("%d\t%s\t%.1f\n", j, stus[j].name, stus[j].score[i]);
            }
            return ;
        }
    }
    printf("No subject called \"%s\" , mind the Case\n", name);
    return ;
}

int main ()
{
    void Initialize();
    void Input();
    void CountStuAverage();
    void CountSubAverage();
    void FindName(char name[]);
    void FindSub(char name[]);
    void PrintTitle();
    void PrintStu(int number);
    void SeeAllStudent();

    freopen("ExampleInput.txt","r",stdin);
    Initialize();
    Input();

//    freopen("ExampleOutput.txt","w",stdout);
    CountStuAverage();
    CountSubAverage();
    FindName("yyh");
    FindName("Nobody");
    FindSub("Math");
    FindSub("C++");
    SeeAllStudent();

    return 0;
}
