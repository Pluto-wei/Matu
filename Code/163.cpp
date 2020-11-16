// 重载<<运算符

#include <iostream>
using namespace std;

class Date{
public:
    Date(int y=1996,int m=1,int d=1){
        day = d;
        month = m;
        year = y;
        if (m>12 || m<1)
        {
            month=1;
        }
        if (d>days(y,m))
        {
            cout<<"Invalid day!"<<endl;
            day=1;
        }
    }
    int days(int y,int m){
        int ddays[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
        if((y%4==0&&y%100!=0)||y%400==0){ //闰年，，搞错了。。
            ddays[2]=29;
        }else{
            ddays[2]=28;
        }return ddays[m];
    }
    void display(){
        cout<<year<<"-"<<month<<"-"<<day<<endl;
    }
    friend ostream& operator<<(ostream&out,Date &obj){
        obj.display();
        return out;
    }
private:
    int year;
    int month;
    int day;
};

int main(){
    int y,m,d;
    cin>>y>>m>>d;
    Date dt(y,m,d);
    cout<<dt;
    return 0;
}