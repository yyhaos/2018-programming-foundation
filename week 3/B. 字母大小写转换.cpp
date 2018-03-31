#include<stdio.h>
int main ()
{
    char a;
    scanf("%c",&a);
    if(a>='a'&&a<='z')
        printf("%c",a+'A'-'a');
    else if(a>='A'&&a<='Z')
        printf("%c",a+'a'-'A');
    else
        printf("input error");\
    return 0;
}
