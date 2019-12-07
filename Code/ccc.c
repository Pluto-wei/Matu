#include<stdio.h>
int main(){
	char a[51];
	char b[51]={0};
	int i,j=1;
	char *q=a,*p=b;
	scanf("%50s",a);
	b[0]=a[0];
	for(i=1;a[i]!='\0';i++){
		if(a[i]<'0'||a[i]>'z'||(a[i]>'9'&&a[i]<'A')||(a[i])>'Z'&&a[i]<'a')
		if(a[i]==b[j-1]){
		continue;
		}
		*(p+j)=*(q+i);
		j++;

	}
    printf("%s",b);
    return 0;
}