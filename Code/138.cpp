#include <iostream>
#include <math.h>
using namespace std;

class Point {
private:
    double x,y;
public:
    Point(double a,double b){
        x=a;y=b;
    }
    double Distance(const Point c){
        double ans=pow((x-c.x),2)+pow((y-c.y),2);
        ans=sqrt(ans);
        return ans;
    }
};

int main(){
    double a,b,c,d;
    cin>>a>>b>>c>>d;
    Point A(a,b),B(c,d);
    cout<<A.Distance(B)<<endl;
    return 0;
}