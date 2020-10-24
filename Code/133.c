//
// Created by zyw on 2020/9/21.
//

#include <iostream>
void Matrix_Mul(int a[3][2], int b[2][4]);
int main(){
    int a[3][2]={{1,2},{3,4},{5,6}};
    int b[2][4]={{1,0,1,1},{0,1,0,1}};
    Matrix_Mul(a,b);
    return 0;
}


void Matrix_Mul(int a[3][2], int b[2][4]){
    int temp;
    for (int i=0;i<3;i++){
        for (int j=0;j<4;j++){
            temp=0;
            for (int k=0;k<2;k++){
                temp+=a[i][k]*b[k][j];
            }printf("%d",temp);
            if(j!=3){
                printf(" ");
            }else{
                printf(" \n");
            }
        }
    }
}