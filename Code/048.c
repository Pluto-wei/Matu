//冒泡排序
#include<stdio.h>
#include<stdbool.h> //包含bool的头文件   lajimatu又报错tule
int main(void)
{
    int a[10];
    int i,j;
    int temp;
    for(i=0;i<10;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<10;i++){
        bool isSorted = true; //判断上一轮是否交换过
        for(j=0;j<(9-i);j++){
            if(a[j]>a[j+1]){
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
                isSorted = false;
            }
        }if (isSorted) break; //布尔值
    }
    for(i=0;i<10;i++){
        printf("%d",a[i]);
        if(i<9) printf(",");
    }
    return 0;
}