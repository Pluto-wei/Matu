//判断n是否为质数
#include <stdio.h>
#include <math.h>
int main ()
{
    int n,i,p=1;
    if(scanf("%d",&n)!=1||n<=3)
        printf("error");
    else{
        for(i=2;i<=sqrt((float)n);i++){
            if(n%i==0){
                p=0;
                break;
            }
        }
        if(p==1) printf("yes");
        else printf("no");
    }  

    return 0;    
}

// vs2010 sqrt报错 对重载函数的调用不明确
//解决方法：对sqrt的参数强制转换成double
//改为k=sqrt((float)n)