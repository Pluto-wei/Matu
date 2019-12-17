#include<stdio.h>
#include<string.h>
void my_strcpy(char *distination,char *source){
	if(distination==0||source==0){
		printf("error");return;
	}
	else {
		int i;
		for(i=0;i<=strlen(source)&&distination[i]!=' ';i++){
		//为什么不是source[i]!=' '
			distination[i]=source[i];
		}
	}
}