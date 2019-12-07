//作弊版
#include<stdio.h>
int main(void)
{
    char a1[100];
    scanf("%s",a1);
    printf("%s\\0\n",a1);
    
    char m[]={0};
    m[1]='\0';
    printf("%s\n",m);
    return 0;
}

