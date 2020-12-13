#include <cstdio>
#include <iostream>
using namespace std;

int factorial(int num);
int main() {
    int num;
    scanf("%d",&num);
    if(num>=12){
        printf("12!=%d",factorial(12));
    }else{
        printf("%d!=%d",num,factorial(num));
    }return 0;
}

int factorial(int num)
{
    if (num == 0) //基本情况返回1;
        return 1;
    else
        return num * factorial(num - 1);
}