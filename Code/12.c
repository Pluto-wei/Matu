#include<stdio.h>
int main (void)
{
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if(a<=0||b<=0||c<=0)
        printf("error\n");
    else if(a+b<=c || a+c<=b || b+c<=a)
        printf("no");
    else printf("yes");
    return 0;
}