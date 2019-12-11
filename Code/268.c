// 简单计算器（循环）
#include<stdio.h>
#include<stdbool.h>
bool yes=true;
void calculate ();


int main (void)
{ 
    calculate ();
    char goon;
    while(1){
        scanf("%s",&goon);
        if(goon!='y'&& goon!='Y') break;
        else {
            calculate ();
        }
    }
    return 0;
}
void calculate (){
    double a,b,ans;
    char op;
    scanf("%lf %c %lf",&a,&op,&b);
    switch(op)
    {
        case'+':ans=a+b;break;
        case'-':ans=a-b;break;
        case'*':ans=a*b;break;
        case'/':{
            if(b==0) yes = false;
            else ans=a/b;
            break;
        }
        default:yes=false;
    }
    if (yes) printf("%.2lf %c %.2lf = %.2lf\n",a,op,b,ans);
    else printf("error\n");
}