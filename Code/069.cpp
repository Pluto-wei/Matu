#pragma once
class CNumberFactory
{
public:
    virtual void Add(int number) {};
    virtual void Sub(int number) {};
    virtual int GetValue() {return -1;};

    virtual void SetValue(int number) {};
    CNumberFactory *Create();
};


// #include "CNumberFactory.h"
#include <iostream>
using namespace std;
class CNumber : public CNumberFactory{
private:
    int num;
public:
    void Add(int number){
        num+=number;
    }
    void Sub(int number) {
        num-=number;
    }
    int GetValue() {
        return num;
    }
    void SetValue(int number) {
        num=number;
    }
};


CNumberFactory *CNumberFactory::Create()
{
    CNumberFactory * p = new CNumber();
    return new CNumber();  //好像这一句就够了，或者return p;
    //不对，应该不行，这不能说明是CNumberFactory的指针，只能看出来是CNumber
    //但是没报错
}