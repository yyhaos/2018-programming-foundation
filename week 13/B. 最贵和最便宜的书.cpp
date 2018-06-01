#include<stdio.h>\
//Problem   :   http://acm.bnu.edu.cn/v3/contest_show.php?cid=9424#problem/B
struct book
{
    char name[500];
    float price;
};
int main ()
{
    freopen("test.txt","r",stdin);
    int n;
    char c;
    scanf("%d\n",&n);
    struct book books[15];
    for(int i = 0 ; i<n;i++)
    {
        int th=0;
        while(~scanf("%c",&c))
        {
            if(c=='\n')
                break;
            else
                books[i].name[th++]=c;
        }
        books[i].name[th]='\0';
        scanf("%f\n",&books[i].price);
    }
    float cheap=books[0].price, expen=books[0].price;
    int c_i=0, e_i=0;
    for(int i = 1 ; i<n;i++)
    {
        if(books[i].price>expen)
        {
            expen=books[i].price;
            e_i=i;
        }
        else if(books[i].price<cheap)
        {
            cheap=books[i].price;
            c_i=i;
        }
    }
    printf("%s\t%.2f\n",books[e_i].name,books[e_i].price);
    printf("%s\t%.2f",books[c_i].name,books[c_i].price);
    /*
    for(int i=0 ; i<n;i++)
    {
        printf("%d:\n",i);
        printf("%s\n",books[i].name);
        printf("%f\n",books[i].price);
    }
    */
    return 0;
}
