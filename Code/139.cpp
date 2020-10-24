#include <iostream>
using namespace std;

class Date{
public:
    Date(int y =1996,int m=1,int d=1);
    int days(int year,int month);
    void NewDay();
    void display(){
        cout<<year<<"-"<<month<<"-"<<day<<endl;
    }
private:
    int year; //年
    int month; //月
    int day;  // 日
};//不要忘记掉分号！！！！ 如果在外面定义，里面声明的时候不能有{}，，被坑了

//#include "CDate.h"
Date::Date(int y,int m,int d){
    if(m<1||m>12){
        cout<<"Invalid month!"<<endl;
        m=1;
    }if(d<1||d>days(y,m)){
        cout<<"Invalid day!"<<endl;
        d=1;
    }year=y;month=m;day=d;
}
void Date::NewDay(){
    day++;
    if(day>days(year,month)){
        day=1;month++;
        if(month==13){
            month=1;year++;
        }
    }
}
int Date::days(int year,int month){
    int ddays[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
    if((year%4==0&&year%100!=0)||year%400==0){ //闰年，，搞错了。。
        ddays[2]=29;
    }else{
        ddays[2]=28;
    }return ddays[month];
}
int main(){
    Date d(1993,13,32);
    d.display();
    return 0;
}