#include<stdio.h>
#define pi 3.14     
int main ()
{
    float r,h,s,v;
    scanf("%f %f",&r,&h);
    // const float pi=3.14;
    s=pi*r*r;
    v=s*h;
    printf("area=%.2f,volume=%.2f",s,v);
    return 0;
}