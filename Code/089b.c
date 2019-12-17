//还是不行
#include<stdio.h>
int main()
{
    float sum,n;
    char op;
    int flag=1;
    scanf("%f",&sum);
    for(;;)
    {
        if(scanf("%c",&op)==1){
            if(op==';') break;
            else {
                scanf("%f",&n);
                if(op=='+') sum+=n;
                else if(op=='-') sum-=n;
                else {printf("error");flag=0;break;}
            }
        }
        else {printf("error");flag=0;break;}
    }
    if(flag) printf("%.6f",sum);

    return 0;
}