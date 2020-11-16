#include <iostream>
#include <cstring>
using namespace std;
class Table{
private:
    float high;

public:
    Table(float h){
        high=h;
    }
    float GetHigh(){
        return high;
    }

};

class Circle{
private:
    float radius;
public:
    Circle(float r){
        radius=r;
    }
    float GetArea(){
        return radius*3.14*radius;
    }
};

class RoundTable: public Table,
                  public Circle{
private:
    char color[20];
public:
    RoundTable(float r,float h,char* c):Table(h),Circle(r){
        strcpy(color,c);
    }
    char * GetColor(){
        return color;
    }
};

int main(){
    float radius,high;
    char color[20];
    cin>>radius>>high>>color;

    RoundTable RT(radius,high,color);
    cout<<"Area:"<<RT.GetArea()<<endl;
    cout<<"High:"<<RT.GetHigh()<<endl;
    cout<<"Color:"<<RT.GetColor()<<endl;
    return 0;
}                                                                             