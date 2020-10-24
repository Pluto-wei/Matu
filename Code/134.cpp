//
// Created by zyw on 2020/9/21.
//


#include <iostream>
#include <string.h>
int SubStrNum(char * str,char * substr);

int main(){
    char str[40] = "hhhhhh";
    char substr[40] ="hh";
    SubStrNum(str,substr);
    return 0;
}


int SubStrNum(char * str,char * substr){
    int len=strlen(str);
    int len2=strlen(substr);
    int count=0;
    int j=0;
    for (int i=0;i<len;i++){
        if(*(str+i)!=*(substr+j)){
            j=0;
        }else{
            j++;
            if(j==len2){
                count++;
                j=0;
            }
        }
    }printf("match times=%d",count);
    return count;
}