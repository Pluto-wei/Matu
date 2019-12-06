#include<stdio.h>
int main (void)
{
    int a,b,c;
    if((scanf("%d,%d,%d",&a,&b,&c)!=3)||a<=0||b<=0||c<=0)  //注意输入格式，这题也可以不判断
        printf("error\n");
    else if(a+b<=c || a+c<=b || b+c<=a)
        printf("no");
    else printf("yes");
    return 0;
}