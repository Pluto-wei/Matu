#include<stdio.h>
#include<stdio.h>

int main()
{
    char str[21];
    scanf("%s",str);
    str[20]='\0';
    if (str[0]=='\0') printf("error");
    else {
        int flag=0;
        for(int i=0;str[i]!='\0';i++){
            if ((str[i]>='a'&&str[i]<='v')||(str[i]>='A'&&str[i]<='V'))
                str[i]+=4;
            else if ((str[i]>='w'&&str[i]<='z')||(str[i]>='W'&&str[i]<='Z'))
                str[i]-=22;
            else {
                flag=1;
                break;
            }
        }
        if (flag==0) printf("%s",str);
        else if (flag==1) printf("error");
    }
    return 0;
}