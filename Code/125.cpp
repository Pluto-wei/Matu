#include <cstdio>
using namespace std;
#include <iostream>

int main(){
    int i,j;
    for(i =0;i<10;i++){
        j = i*10 +6;
        if(j%3!=0)continue;
        cout<<j;
    }
    return 0;
}
