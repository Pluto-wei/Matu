#include <stdio.h>
#include <string.h>
int main ()
{
    char str[21];
    scanf("%s",str);
    str[20]='\0';
    printf("%s\n",str);
    return 0;
}