//就这？？？时间设置降不清楚

#include <iostream>
using namespace std;
class Clock{
public:
    Clock(int h,int m, int s);
    void SetAlarm(int h,int m,int s);
    void run();
    void ShowTime(){
        cout<<"Now:"<<hour<<":"<<minute<<":"<<second<<endl;
    }
private:
    int hour;   //时
    int minute;  //分
    int second;  //秒

    int Ahour;   //时（闹钟）
    int Aminute;  //分（闹钟）
    int Asecond;   //秒（闹钟）
};

#include "Clock.h"
Clock::Clock(int h,int m, int s){
//    if(h<0||h>23||m<0||m>=60||s<0||s>=60){
//        hour=0;minute=0;second=0;
//    }else{
//        hour=h;minute=m;second=s;
//    }
    if(h < 0 || h >= 24)hour = 0;
    else hour = h;
    if(m < 0 || m >= 60)minute = 0;
    else minute = m;
    if(s < 0 || s >= 60)second = 0;
    else second = s;

}
//int isset=0;
void Clock::SetAlarm(int h,int m, int s){
//    if(h>23||m>=60||s>=60){
//        Ahour=0;Aminute=0;Asecond=0;isset=0;
//    }else if(h<0||m<0||s<0){
//        hour=0;minute=0;second=0;isset=0;
//    }else{
//        Ahour=h;Aminute=m;Asecond=s;isset=1;
//    }
    if(h > 24)hour = 0;
    else Ahour = h;
    if(m > 60)minute = 0;
    else Aminute = m;
    if(s > 60)second = 0;
    else Asecond = s;
}

void Clock::run(){
    second++;
    if(second==60){
        second=0;minute++;
        if(minute==60){
            minute=0;hour++;
        }if(hour==24){
            hour=0;
        }
    }if(minute==Aminute&&second==Asecond&&hour==Ahour){
        cout<<"Plink!plink!plink!..."<<endl;
    }
}
int main(){
    Clock c(2,3,4);
    c.SetAlarm(2,3,5);
    c.run();
}