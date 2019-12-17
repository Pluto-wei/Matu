//字符串的拷贝 不会。
#include<stdio.h>
#include<string.h>
void my_strcpy(char * des,char * source)
{
    if (des==0||source==0){
        printf("error");
        return;
    }else{
        for(int i=0;source[i]!=' '&&source[i]!='\0';i++){
            des[i]=source[i];
        }return;
    }
}
