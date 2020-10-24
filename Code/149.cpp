
//#include "CString.h"

#include <string.h>

#include <iostream>
using namespace std;
class String{
private:
    char *mystr;    //字符串
    int len;    //字符串长度
public:
    String(){
        len =0;
        mystr =NULL;
    }
    String(const char* p){
        len = strlen(p);
        mystr = new char[len+1];
        strcpy(mystr,p);
    }
    String(String &s){
        len = s.len;
        if (len !=0)
        {
            mystr = new char[len+1];
            strcpy(mystr,s.mystr);
        }
    }
    ~String(){
        if (mystr != NULL)
        {
            delete []mystr;
            mystr =NULL;
            len = 0;
        }
    }

    char *GetStr(){return mystr;}
    void ShowStr(){cout<<mystr;}

    bool IsSubstring(const char *str);
    bool IsSubstring(const String &str);
    int str2num();
    void toUppercase();
};

bool String::IsSubstring(const String &str) {
    int j=0;
    for(int i=0;i<len;i++){
        if(*(mystr+i)==*(str.mystr+j)){
            if(j==str.len-1) return true;
            else j++;
        }else{
            j=0;  //不要掉了。。。
        }
    }
    return false;
}

bool String::IsSubstring(const char *str) {
    int j=0;
    int llen=strlen(str);
    for(int i=0;i<len;i++){
        if(*(mystr+i)==*(str+j)){
            if(j==llen-1) return true;
            else j++;
        }else{
            j=0;
        }
    }
    return false;
}

int String::str2num() {
    int ans;
    for(int i=0;i<len;i++){
        if(*(mystr+i)<='9'&&*(mystr+i)>='0'){
            ans=ans*10+(*(mystr+i)-'0');
        }
    }
    return ans;
}

void String::toUppercase() {
    for(int i=0;i<len;i++){
        if(*(mystr+i)<='z'&&*(mystr+i)>='a'){
            *(mystr+i)=*(mystr+i)-'a'+'A';
        }
    }return;
}

int main(){

    String a("abddddddbb");
    if(a.IsSubstring("dddc")){
        cout<<"yes";
    }
    return 0;
}

