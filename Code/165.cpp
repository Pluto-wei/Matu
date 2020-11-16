//搞了半天86分，我说呢，原来是看错题目了，这个集合属于那个集合，。。。


#include <iostream>
using namespace std;
class Set{
private:
    int n;
    int * pS; //集合元素
public:
    Set(){n = 0;pS =NULL;}
    Set(Set &s){
        n = s.n;
        if (n !=0)
        {
            pS= new  int[n+1];
            for (int i =1;i<=n;i++) //集合的下标从1开始，集合中不能有重复元素
                pS[i] = s.pS[i];
        }
    }
    ~Set(){
        if (pS)
        {
            delete []pS;
            pS = NULL;
            n =0;
        }
    }
    void ShowElement()const{ //输出集合的元素
        int temp = 0;
        for(int i=1;i<n;i++)  //这好像少了一个元素？  从小到大排列
        {
            for(int j=i+1;j<n;j++)
            {
                if(pS[i] > pS[j])
                {
                    temp = pS[i];
                    pS[i] = pS[j];
                    pS[j] = temp;
                }
            }
        }
        cout<<"{";
        for(int i =1;i<n;i++)
            cout <<pS[i]<<",";
        if (IsEmpty())
            cout<<"}"<<endl;
        else cout<<pS[n]<<"}"<<endl;  //输出的最后一个元素好像没有排序吧
    }
    bool IsEmpty()const{return n?false:true;} //判断集合是否为空
    int size(){return n;}
    bool IsElement(int e)const {
        for (int i =1;i<=n;i++)
            if (pS[i] ==e)
                return true;
        return  false;
    }
    bool operator <=(const Set &s)const;//this <= s判断当前集合是否包于集合s
    bool operator ==(const Set &s)const; //判断集合是否相等
    Set & operator +=(int e);    // 向集合中增减元素e
    Set & operator -=(int e);    //删除集合中的元素e

    Set operator |(const Set &s)const;  //集合并
    Set operator &(const Set &s)const;//集合交
    Set operator -(const Set &s)const; //集合差
};

//#include "CSet.h"

bool Set::operator<=(const Set &s) const {  //看清楚题目，是当前集合是否属于另一个集合。。。jiuzhe?
    if(s.n<n){
        return false;
    }
    for(int i=1;i<=n;i++){
        if(!s.IsElement(pS[i])){
            return false;
        }
    }
    return true;
}

bool Set::operator==(const Set &s) const {
    if(s.n!=n){
        return false;
    }
    for(int i=1;i<=s.n;i++){
        if(!IsElement(s.pS[i])){
            return false;
        }
    }
    return true;
}

Set &Set::operator+=(int e) {  //new分配的内存空间不够怎么办
    if(IsEmpty()){
        pS=new int [100];  //分配不够会错误
    }
    if(!IsElement(e)){
        n++;
        pS[n]=e;
    }
    return *this;  //不知道对不对
}

Set &Set::operator-=(int e){
    for (int i =1;i<=n;i++)
        if (pS[i] ==e){
            for(;i<n;i++){
                pS[i]=pS[i+1];
            }n--;
            break;
        }
    return *this;
}

Set Set::operator|(const Set &s) const {
    Set S;//用第二种构造函数直接赋值的时候报错了，应该是可以的
    S.n=n;
    S.pS = new int[n+s.n+1];
    for(int i=1;i<=n;i++){
        S.pS[i]=pS[i];
    }
    for (int i=1;i<=s.n;i++){
        if(!S.IsElement(s.pS[i])){
            S.pS[++S.n]=s.pS[i];
        }
    }
    return S;
}

Set Set::operator&(const Set &s) const {
    Set S;
    S.n=0;
    S.pS = new int[n+s.n+1];
    for (int i=1;i<=s.n;i++){
        if(IsElement(s.pS[i])){
            S.pS[++S.n]=s.pS[i];
        }
    }
    return S;
}

Set Set::operator-(const Set &s) const {
    Set S;
    S.n=0;
    S.pS = new int[n+1];
    for (int i=1;i<=n;i++){
        if(!s.IsElement(pS[i])){
            S.pS[++S.n]=pS[i];
        }
    }
    return S;
}


int main(){
    Set s1,s2;
    s1+=1;s1+=3;s2+=2;s2+=1;
    (s1-s2).ShowElement() ;//{1,2}
    return 0;
}