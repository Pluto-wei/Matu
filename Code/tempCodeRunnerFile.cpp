#include<stdio.h>
#include<stdlib.h>
#include <cstdio>
struct student
{
    char name[20];
    int gender;
    int birth;
    float height;
    int C,W;
};

int main()
{
    struct student stu[10];
    int n;
    int C_average,C_max=0,C_min=101;
    int W_average,W_max=0,W_min=101;
    //char Cstu[5],Wstu[5];  这样好像很麻烦
    scanf("%d",&n);

    for(int i=0;i<n;i++)
    {
        scanf("%s %d %d %f %d %d",stu[i].name,&stu[i].gender,&stu[i].birth,&stu[i].height,&stu[i].C,&stu[i].W);
        if (stu[i].C > C_max) C_max=stu[i].C;
        if (stu[i].C < C_min) C_min=stu[i].C;
        if (stu[i].W > W_max) W_max=stu[i].W;
        if (stu[i].W < W_min) W_min=stu[i].W;
        C_average+=stu[i].C;
        W_average+=stu[i].W;
    }
    C_average/=n;
    W_average/=n;

    printf("C_average:%d\n",C_average);
    printf("C_max:%d\n",C_max);
    for(int i=0;i<n;i++)
    {
        if(stu[i].C==C_max) printf("%s %d %d %.2f %d %d\n",stu[i].name,stu[i].gender,stu[i].birth,stu[i].height,stu[i].C,stu[i].W);
    }
    printf("C_min:%d\n",C_min);

    printf("Calculus_average:%d\n",W_average);
    printf("Calculus_max:%d\n",W_max);
    for(int i=0;i<n;i++)
    {
        if(stu[i].W==W_max) printf("%s %d %d %.2f %d %d\n",stu[i].name,stu[i].gender,stu[i].birth,stu[i].height,stu[i].C,stu[i].W);
    }
    printf("Calculus_min:%d\n",W_min);

    return 0;
}