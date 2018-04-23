#include<stdio.h>
void drawline(int space,int num)
{
    while(space--)
        printf(" ");
    while(num--)
        printf("*");
    printf("\n");
    return ;
}
void draw(int n)
{
    int i, j;
    for(i=1;i<=2*n-1;i++)
    {
        int ii=i;
        if(ii>n)
            ii=2*n-ii;
        drawline(n-ii,2*ii-1);
    }
    return;
}
int main ()
{
    void draw(int n);
    void drawline(int space,int num);
    int n;
    scanf("%d",&n);
    draw(n);
    return 0;
}
