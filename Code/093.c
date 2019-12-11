//3.13 输出100以内的所有素数
#include <stdio.h>
// #include <stdbool.h>
int main()
{
    for(int i=2;i<=100;i++)
    {
        // bool a = true;
        int temp = 0;
        for (int j=2;j < i;j++)
        {
            if (i%j == 0){
                temp =1;
                break;
            }
        }
        if (temp==0)
        {
            printf("%d,",i);
        }
    }
    getchar();
    return 0;
}