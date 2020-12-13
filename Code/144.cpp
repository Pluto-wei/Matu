#include <cstdio>
using namespace std;

void printxx(int num);
void printkk(int num);

int main() {
    int num;
    scanf("%d",&num);
    if(num<=0||num>80||num%2==0){
        printf("error");
    }else{
        int a=(num-1)/2;
        for(int i=0;i<=a;i++){
            printkk(i);
            printxx(num-2*i);
            printf("\n");
        }
    }return 0;
}

void printxx(int num){
    for (int i =0;i<num;i++){
        printf("*");
    }return;
}
void printkk(int num){
    for (int i =0;i<num;i++){
        printf(" ");
    }return;
}