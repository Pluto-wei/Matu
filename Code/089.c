//90分 3.7 计算加减表达式 没有判断结尾是不是；
#include<stdio.h>
void main()
{
    char op;
    float num,result;
    int flag=1;
    scanf("%f",&result);
    scanf("%c",&op);
    while(op!=';'){
        scanf("%f",&num);
        if(op=='+') result+=num;
        else if(op=='-') result-=num;
        else {
            printf("error");flag=0;break;
        }
        scanf("%c",&op);
        
    }
    if (flag) printf("%.6f",result);
    return;
}