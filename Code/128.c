//根据公式输出圆周率（C++）
#include<stdio.h>
int main ()
{
    double m=0;
    int i;
    for (i=1;i<=1e8/2;i++)
    {
        if(i%2==0) m=m-1/(2*(double)i-1);
        else m+=1/(2*(double)i-1);
    }

    if(i%2==0) m=m-1/(2*(double)i-1);   //不做这次运算最后一项刚好不小于那个数
    else m+=1/(2*(double)i-1);

    printf("steps=%d ",i);
    printf("PI=%.5f",4*m);

    return 0;
}