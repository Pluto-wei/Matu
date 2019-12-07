#include <stdio.h>
int main ()
{
    char str1[51],str2[51];
    scanf("%s",str1);
    int j=-1;
    for(int i=0;str1[i]!='\0';i++)
    {        
        if(('a'<=str1[i]&&str1[i]<='z')||('A'<=str1[i] && str1[i]<='Z')||('0'<=str1[i] && str1[i]<='9')){   
        j++;
        str2[j]=str1[i];
        }else if(i==0||(str1[i]!=str1[i-1])){
            j++;
            str2[j]=str1[i];
        }
    }
        
    printf("%s",str2);
    return 0;
}