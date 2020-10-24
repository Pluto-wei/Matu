#include <iostream>
#include <string.h>
using namespace std;

class Student
{
private:
    char name[20];
    char id[20];
    int grade1,grade2,grade3;
    static int tgrade1,tgrade2,tgrade3;
public:
    Student(char *name1,char *id,int g1,int g2,int g3);
    void display();
    static double average1(){
        double ans=tgrade1/3.0;
        return ans;
    }
    static double average2(){
        double ans=tgrade2/3.0;
        return ans;
    }
    static double average3(){
        double ans=tgrade3/3.0;
        return ans;
    }
};
int Student::tgrade1=0,Student::tgrade2=0,Student::tgrade3=0;

Student::Student(char *name1,char *id1,int g1,int g2,int g3)
{
    strcpy(name,name1);
    strcpy(id,id1);
    grade1=g1;tgrade1+=g1;
    grade2=g2;tgrade2+=g2;
    grade3=g3;tgrade3+=g3;
}

void Student::display(){
    cout<<name<<" "<<id<<" "<<grade1<<" "<<grade2<<" "<<grade3<<endl;
}


int main(){
    Student *stu1,*stu2,*stu3;
    char name1[10],name2[10],name3[10];
    char num1[12],num2[12],num3[12];
    int grade1[3],grade2[3],grade3[3];
    cin>>name1>>num1>>grade1[0]>>grade1[1]>>grade1[2];
    cin>>name2>>num2>>grade2[0]>>grade2[1]>>grade2[2];
    cin>>name3>>num3>>grade3[0]>>grade3[1]>>grade3[2];
    stu1 = new Student(name1,num1,grade1[0],grade1[1],grade1[2]);
    stu2 = new Student(name2,num2,grade2[0],grade2[1],grade2[2]);
    stu3 = new Student(name3,num3,grade3[0],grade3[1],grade3[2]);

    stu1->display();
    stu2->display();
    stu3->display();

    cout<<"The average grade of course1:"<<stu2->average1()<<endl;
    cout<<"The average grade of course2:"<<stu2->average2()<<endl;
    cout<<"The average grade of course3:"<<stu2->average3()<<endl;
    return 0;
}