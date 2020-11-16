//80分。。。不想看了，两个delete可能都错了

#include <cstring>

#include <iostream>
using namespace std;
class String{
protected:
    char *mystr;
    int len;
public:
    String(const char *p){
        len = strlen(p);
        mystr = new char[len+1];
        strcpy(mystr,p);
    }
    ~String(){
        if (mystr !=NULL)
        {
            delete []mystr;
            mystr = NULL;
            len = 0;
        }
    }
    void showStr(){cout <<mystr;}
    char * GetStr(){return mystr;}
    virtual bool IsSubString(const char *str){
        int i,j;
        for (i =0;i<len;i++)
        {
            int k = i;
            for (j =0;str[j] !='\0';j++,k++)
            {
                if (str[j]!= mystr[k]) break;
            }
            if(str[j] =='\0') return true;
        }
        return false;
    }
};

class EditString:public String{
public:
    EditString(const char *p):String(p){}
    int IsSubString(int start, const char *str);
    void EditChar(char s, char d);
    void EditSub(char * subs,char *subd);

    void DeleteChar(char ch);
    void DeleteSub(char * sub);

};


//#include "CString.h"
#include <cstring>

int EditString::IsSubString(int start, const char *str) {
    int i,j;
    for (i =start;i<len;i++){
        int k = i;
        for (j =0;str[j] !='\0';j++,k++) {
            if (str[j]!= mystr[k]) break;
        }
        if(str[j] =='\0') return i;
    }
    return -1;
}

void EditString::EditChar(char s, char d) {
    for(int i=0;i<len;i++){
        if(mystr[i]==s){
            mystr[i]=d;
        }
    }
}

void EditString::EditSub(char *subs, char *subd) {
    int llen=strlen(subd);
    int alen=strlen(subs);
    char *p=new char[len+1+llen*len];
    int last=0;//mystr上一个没copy的位置
    int pp=0;//p的下一个位置
    int num=0;//替换次数
    for(;;){
        int pos=IsSubString(last,subs);
        if(pos==-1){
            break;
        }else{
            for(int j=last;j<pos;j++){
                p[pp++]=mystr[j];
            }strcat(p,subd);
            pp+=llen;
            last=pos+alen;
            num++;
        }
    }for(int j=last;j<len;j++){
        p[pp++]=mystr[j];
    }
    mystr=p;
    len+=num*(llen-alen);
}

void EditString::DeleteChar(char ch) {
    char *p=new char[len+1];
    int j=0;
    for(int i=0;i<len;i++){
        if(mystr[i]!=ch){
            p[j++]=mystr[i];
        }
    }mystr=p;
    len=j;
}

void EditString::DeleteSub(char *sub) {
    int llen=strlen(sub);
    char *p=new char[len+1];
    int last=0;//mystr上一个没copy的位置
    int pp=0;//p的下一个位置
    int num=0;//替换次数
    for(;;){
        int pos=IsSubString(last,sub);
        if(pos==-1){
            break;
        }else{
            for(int j=last;j<pos;j++){
                p[pp++]=mystr[j];
            }
            last=pos+llen;
            num++;
        }
    }for(int j=last;j<len;j++){
        p[pp++]=mystr[j];
    }
    mystr=p;
    len-=num*llen;
}

int main(){
    EditString es("testtesttest");
    es.DeleteChar('t');;//"tttttt";
    es.showStr();
    return 0;
}