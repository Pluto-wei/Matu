#include <cstring>

//这个基类里的变量是protected，所以继承以后是private，可以访问
#include <iostream>
using namespace std;
class Building{
public:
    Building(char *name,int floor,int room,int area){
        strcpy(this->name,name);
        this->floor = floor;
        this->room = room;
        this->area = area;
    }
    virtual void display(){
        cout<<"Name:"<<name<<endl;
        cout<<"Floor:"<<floor<<endl;
        cout<<"Room:"<<room<<endl;
        cout<<"Area:"<<area<<endl;
    }
    Building * createTeachBuilding(char *name,int floor,int room,int area,char *function);
    Building * creatDormBuilding(char *name,int floor,int room,int area,int peoples);
protected:
    char name[20];
    int floor;
    int room;
    float area;

};


// #include "Building.h"

class TeachBuilding : public Building{
private:
    char function[20];
public:
    TeachBuilding(char *name,int floor,int room,int area,char *function):Building(name,floor,room,area){
        strcpy(this->function,function);
    }
    void display(){
        cout<<"Name:"<<name<<endl;
        cout<<"Floor:"<<floor<<endl;
        cout<<"Room:"<<room<<endl;
        cout<<"Area:"<<area<<endl;
        cout<<"Function:"<<function<<endl;
    }
};

class DormBuilding : public Building{
private:
    int peoples;
public:
    DormBuilding(char *name,int floor,int room,int area,int people):Building(name,floor,room,area){
        peoples = people;
    }
    void display(){
        cout<<"Name:"<<name<<endl;
        cout<<"Floor:"<<floor<<endl;
        cout<<"Room:"<<room<<endl;
        cout<<"Area:"<<area<<endl;
        cout<<"Peoples:"<<peoples<<endl;
    }

};
Building* Building::createTeachBuilding(char *name,int floor,int room,int area,char *function){
    Building * p = new TeachBuilding(name,floor,room,area,function);
    return p;
}

Building * Building::creatDormBuilding(char *name,int floor,int room,int area,int peoples){
    Building * p = new DormBuilding(name,floor,room,area,peoples);
    return p;

    //return new DormBuilding(name,floor,room,area,peoples);
}

