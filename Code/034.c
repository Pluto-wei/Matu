//60分  没懂题目啥意思
#include <stdio.h>
#include <string.h>
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
    int L1,L2, i,j;
    for(int i=0;destination[i]!='\0';i++){
        if (destination[i] == ' ') {
            destination[i] = '\0';
            break;
        }
    }

    L1=strlen(source);
    L2=strlen(destination);

    for(i=0;i<L1;i++)
    {
        destination[L2+i]=source[i];
    }
    for(int i=0;destination[i]!='\0';i++){
        if (destination[i] == ' ') {
            destination[i] = '\0';
            break;
        }
    }
}