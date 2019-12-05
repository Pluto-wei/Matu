#include<stdio.h>   
int main(void)
{
	int a,b,c;
	if((scanf("%d,%d,%d",&a,&b,&c)==3)&&a>0&&b>0&&c>0)
	{
		if(a+b>c&&a+c>=b&&b+c>=a)
		{
			printf("yes");
		}
	
		else
		{
			printf("no");
		}
	}
	else
	{
		printf("error");
	}
	return 0;
}
