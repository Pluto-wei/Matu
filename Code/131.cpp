#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int a,i=0,odd=0,even=0,ev[10],od[10];
    for(i =1;i<=10;i++){
        scanf("%d",&a);
        if(a<0) break;
        if(a%2==0) ev[even++]=a;
        else od[odd++]=a;
    }sort(ev,ev+even);
    sort(od,od+odd);
    for(int i=0;i<odd;i++){
        printf("%d ",od[i]);
    }for(int i=0;i<even;i++){
        printf("%d ",ev[i]);
    }return 0;
}
