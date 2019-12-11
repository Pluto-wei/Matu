//03_18 比大小 
//下面程序的功能是对键盘输入的两个字符串进行比较，然后输出两个字符串中第一个不相同字符的ASCII码之差。
#include <stdio.h>
#include <string.h>
int main ()
{
    char str1[100];
    char str2[100];
    scanf("%s",str1);
    scanf("%s",str2);
    int i=0;            //如果在循环里int会报错 error: 'i' undeclared (first use in this function) 
    for(i=0;(str1[i]==str2[i])&&str1[i]!='\0';i++){
    }
    printf("%d",str1[i]-str2[i]);


    return 0;
}