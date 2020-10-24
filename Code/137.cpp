#include <iostream>
#include <math.h>
using namespace std;

class Ctriangle{
private:
    double a,b,c;
public:
    Ctriangle(double aa,double bb,double cc){
        a=aa;b=bb;c=cc;
    };
    double GetPerimeter(){
        double perimeter=a+b+c;
        return perimeter;
    };
    double GetArea(){
        double area;
        double p=(a+b+c)/2;
        area=sqrt(p*(p-a)*(p-b)*(p-c));
        return area;
    };
    void display(){
        cout<<"Ctriangle:a="<<a<<",b="<<b<<",c="<<c<<endl;
        return;
    };
};

int main(){
    double a,b,c;
    cin>>a>>b>>c;
    Ctriangle T(a,b,c);
    T.display();
    cout<<"Perimeter:"<<T.GetPerimeter()<<endl;
    cout<<"Area:"<<T.GetArea()<<endl;
    return 0;
}