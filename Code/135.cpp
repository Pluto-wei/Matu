
#include <iostream>
#include <string.h>
#include<stack>
using namespace std;
stack<int> answer;

int BigIntEqual(char* num1,char* num2);
int Sub(char* num1,char* num2);
int main(){
    char num1[40];
    char num2[40];

    scanf("%s %s",num1,num2);
    int a=BigIntEqual(num1,num2);
    if(a==1){
        int len=strlen(num1);
        printf("+");
        Sub(num1,num2);
    }else if(a==-1){
        int len=strlen(num2);
        printf("-");
        Sub(num2,num1);
    }else{
        printf("0");
    }
    return 0;
}

int BigIntEqual(char* num1,char* num2)         //比较绝对值大小
{   int len1=strlen(num1);
    int len2=strlen(num2);
    //num1的位数大于num2
    if(len1>len2)
        return 1;
        //num1的位数小于num2
    else if(len1<len2)
        return -1;
    else                                 //两数位数相等
    {
        int i=0;                  //num1的数据位数
        while(i<len1)                       //从高位向地位比
        {
            //num1对应位大于num2
            if(*(num1+i)>*(num2+i))
                return 1;
                //num1对应位小于num2
            else if(*(num1+i)<*(num2+i))
                return -1;
            else                            //比较下一位
                i++;
        }
    }
    return 0;                               //相等
}
int Sub(char* num1,char* num2){
    int len1=strlen(num1);len1--;
    int len2=strlen(num2);len2--;
    int jinwei=0;
    for(;len2>=0;len2--,len1--){
        int temp=*(num1+len1)-*(num2+len2)-jinwei;
        if(temp>=0){
            answer.push(temp);
            jinwei=0;
        }else{
            answer.push(temp+10);
            jinwei=1;
        }
    }for(;len1>=0;len1--){
        int temp=*(num1+len1)-'0'-jinwei;
        if(temp>=0){
            answer.push(temp);
            jinwei=0;
        }else{
            answer.push(temp+10);
            jinwei=1;
        }
    }
    int size=answer.size();
    for(int i=0;i<size;i++){
        printf("%d",answer.top());
        answer.pop();
    }
    return 0;
}