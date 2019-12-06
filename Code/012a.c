#include <stdio.h>	
int main(void)
{
	int a, b, c, temp;
	scanf("%d,%d,%d", &a, &b, &c);  //注意输入格式
	if (a < b)
	{
		temp = a;
		a = b;
		b = temp;
	}
	if (a < c)
	{
		temp = a;
		a = c;
		c = temp;
	}
	if (a <= 0 || b <= 0 || c <= 0)
		printf("error\n");
    else if(b+c>a) printf("yes");
    else printf("no");
	return 0;
}