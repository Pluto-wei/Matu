#include<iostream>
#include"ShapeFactory.h"
using namespace std;


class Triangle :public ShapeFactory
{
private:
	float a, b, c;
public:
	Triangle(float a0, float b0, float c0)
	{
		a = a0; b = b0; c = c0;
	}
	float Circumstance()
	{
		return a + b + c;
	}

};

class Quadrangle :public ShapeFactory
{
private:
	float a, b, c, d;
public:
	Quadrangle(float a0, float b0,float c0,float d0)
	{
		a = a0, b = b0, c = c0, d = d0;
	}
	float Circumstance()
	{
		return a + b + c+d;
	}
}; 

class Circle :public ShapeFactory
{
private:
	float r;
public:
	Circle(float r0)
	{
		r = r0;
	}
	float Circumstance()
	{
		return r*2*3.14;
	}
};

ShapeFactory* ShapeFactory::Create(float a, float b, float c)
{
	ShapeFactory* p = new Triangle(a, b, c);
	return p;
}
ShapeFactory* ShapeFactory::Create(float a, float b, float c, float d)
{
	ShapeFactory* p = new Quadrangle(a, b, c, d);
	return p;
}
ShapeFactory* ShapeFactory::Create(float r)
{
	ShapeFactory* p = new Circle(r);
	return p;
}
