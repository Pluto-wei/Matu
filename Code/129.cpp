#include <iostream>
using namespace std;


int isleap(int n);
int main(){
    int a[12]={31,28,31,30,31,30,31,31,30,31,30,31};
    int y,m;
    scanf("%d%d",&y,&m);
    if(isleap(y)) a[1]++;
    printf("days:%d",a[m%12-1]);
    return 0;
}
int isleap(int n){
    if(n%400==0||(n%100!=0&&n%4==0)) return 1;
    else return 0;
}