#include <iostream>
using namespace std;
class Clock{
public:
    Clock(int h,int m,int s){
        hour =(h>23? 0:h);
        minute = (m>59?0:m);
        second = (s>59?0:s);
    }
    virtual void run(){
        second = second+1;
        if (second>59)
        {
            second =0;
            minute+=1;
        }
        if (minute>59)
        {
            minute =0;
            hour+=1;
        }
        if (hour>23)
        {
            hour =0;
        }
    }
    virtual void showTime(){
        cout<<"Now:"<<hour<<":"<<minute<<":"<<second<<endl;
    }
    int getHour(){return hour;}
    int getMinute(){return minute;}
    int getSecond(){return second;}

    Clock * createClockWithDate(int h,int m,int s,int year,int month,int day);
protected:
    int hour;
    int minute;
    int second;
};

class Date{
public:
    Date(int y=1996,int m=1,int d=1){
        day =d;
        year =y;
        month =m;
        if (m>12||m<1)
        {
            m=1;
        }
        if(d>days(y,m)){
            day = 1;
        }
    };
    int days(int year,int month);
    void NewDay();
    void display(){
        cout<<year<<"-"<<month<<"-"<<day<<endl;
    }
protected:
    int year;
    int month;
    int day;
};


/// #include "ClockAndDate.h"

int Date::days(int year, int month) {
    int ddays[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
    if((year%4==0&&year%100!=0)||year%400==0){ //闰年，，搞错了。。
        ddays[2]=29;
    }else{
        ddays[2]=28;
    }
    return ddays[month];
}

void Date::NewDay() {
    day+=1;
    if(day>days(year,month)){
        day=1;
        month++;
    }if(month==13){
        month=1;
        year++;
    }
}

class ClockWithDate : public Clock, public Date{
public:
    ClockWithDate(int h,int m,int s,int y,int mm,int d):Clock(h,m,s),Date(y,mm,d){}
    void run(){
        Clock::run();
        if(hour==0&&minute==0&&second==0){
            NewDay();
        }
    }
    void showTime(){
        Clock::showTime();
        display();
    }
};


Clock* Clock::createClockWithDate(int h,int m,int s,int year,int month,int day){
    return new ClockWithDate(h,m,s,year,month,day);
}