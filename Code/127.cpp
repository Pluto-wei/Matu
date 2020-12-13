#include <cstdio>
using namespace std;
#include <iostream>

int main(){
    int i;
    for(i =100;i<=200;i++){
        if(i%3==0||i%7==0)continue;
        cout<<i;
    }
    return 0;
}