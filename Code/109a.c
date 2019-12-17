// 100分 4.6 统计一行字符的单词数
#include<stdio.h>
int main()
{
    char string[81];
    int i,count=0,word=0;
    char c;
    gets(string);   //输入一个字符串给字符数组string

    for (i = 0;(c=string[i])!='\0'; i++)
    {
        if (c == ' ') word = 0;//如果是空格字符，使word置0
        else if (word == 0){    //如果不是空格字符，且word原来的值为0，使word置1
            word = 1;
            count++;
        }
    }
    printf("%d",count);
    return 0;
}