//不懈努力之后有90分了(忘记error了)
//加了error 100
#include<stdio.h>
#include<string.h>
void my_strcat(char * destination,const char * source);
int main()
{
    char a[100],b[10];
    scanf("%s",b);
    scanf("%s",a);
    b[5]=' ';
    a[6]=' ';
    my_strcat(a,b);
    printf("%s",a);
    return 0;

}

void my_strcat(char * destination,const char * source)
{
    if (destination==0||source==0){
        printf("error");
        return;
    }
    else{
        int L1,L2;
        for(L1=0;source[L1]!=' ';L1++){}
        for(L2=0;destination[L2]!=' ';L2++){}

        for(int i=0;i<=L1;i++)
        {
            destination[L2+i]=source[i];
        }
    }
}