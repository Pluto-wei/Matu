//9_输出由星号组成的三角形
#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    if(n%2==0||n<=0||n>=80) printf("error");
    else {
        int i=(n-1)/2;      //每行前面的空格数
        for(int line=1;i>=0;i--,line++){
            for(int j=0;j<i;j++){
                printf(" ");
            }
            for(int k=0;k<(line*2-1);k++){
                printf("*");
            }
            printf("\n");
        }

    }
    return 0;
}