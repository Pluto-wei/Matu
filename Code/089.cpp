// 疯狂error
#include <stdio.h>
#include <string.h>
#include <iostream>
using namespace std;

int main()
{
   // char cal[100];  //atoi转成整数
    float sum;
    char c;

    cin>>sum;

    while(cin>>c,c!=';')
    {
        int t;
        int flag=1;
        cin>>t;
        switch(c){
            case '+':sum+=t;break;
            case '-':sum-=t;break;
            default:printf("error");flag=0;break;
        }
        if(flag) break;
    }
    cout<<sum<<endl;

    return 0;
}