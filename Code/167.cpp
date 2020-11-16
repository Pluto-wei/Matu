#include <iostream>
using namespace std;
class Shape{
public:
    Shape(){}
    ~Shape(){}
    virtual double GetArea()=0;
    virtual double GetPerimeter()=0;
    static Shape* createRectangle(double length,double width);
    static Shape* createCircle(double radius);
};


//#include "Shape.h"


class Rectangle: public Shape{
private:
    double length,width;
public:
    double GetArea(){
        return length*width;
    }double GetPerimeter(){
        return 2*(length+width);
    }
    Rectangle(double l,double w){
        length=l;width=w;
    }
};


class Circle: public Shape{
private:
    double radius;
public:
    double GetArea(){
        return 3.14*radius*radius;
    }double GetPerimeter(){
        return 2*3.14*radius;
    }Circle(double r){
        radius=r;
    }
};

Shape * Shape::createRectangle(double l,double w){return new Rectangle(l,w);}
Shape * Shape::createCircle(double r){return new Circle(r);}