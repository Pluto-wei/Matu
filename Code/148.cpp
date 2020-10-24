#include <iostream>
#include <string.h>
using namespace std;

class User{
private:
    char name[1000][10];  //指针要分配空间，但我不太会
    char pass[1000][10];
    int num;
public:
    int login(char *name1,char * pass1){
        for(int i=0;i<num;i++){
            if(strcmp(name[i],name1)==0){
                if(strcmp(pass[i],pass1)==0){
                    return i;
                }else{
                    break;
                }
            }
        }return -1;
    }
    User(char * name1,char * pass1){
        num=0;
        strcpy(name[num],name1);
        strcpy(pass[num],pass1);
        num++;
    }
    void AddUser(char * name1,char * pass1){
        strcpy(name[num],name1);
        strcpy(pass[num],pass1);
        num++;
    }
};

int main(){
    char name[10],name1[10],pass[10],pass1[10];
    cin>>name>>pass>>name1>>pass1;
    User user("LiWei","liwei101");
    user.AddUser(name,pass);
    if (user.login(name1,pass1) >=0)
    {
        cout<<"Success Login!"<<endl;
    }
    else{
        cout<<"Login failed!"<<endl;
    }
    return 0;
}