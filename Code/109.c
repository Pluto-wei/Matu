//4.6 统计一行字符的单词数
//这个不太行，间隔只有一个空格才可以 
#include<stdio.h>
#include<string.h>
int main ()
{
    
    char str[257];
    gets(str);
    int len=strlen(str);
    int num=1;
    for(int i=0;i<len;i++)
    {
        if(str[i]==' ') num++;
    }
    if(str[0]==' ') num--;
    if(str[len-1]==' ') num--;
    printf("%d",num);
    return 0;
}