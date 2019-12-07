// 字符串 转义字符 不会。
#include<stdio.h>
int main(void)
{
    char a1[100],a2[100];
    int i;
    //gets(a1);
    scanf("%s",a1);
    for(i=0;i<100;i++){
        if(a1[i]=='\0') {

            break;
        }
        else a2[i]=a1[i];
    }
    //puts(a2);
    printf("%s\\0",a2);
    return 0;
}