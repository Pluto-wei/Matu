//有点厉害哦        100分
#include<stdio.h>
int main()
{
	float sum = 0, k;
	char v;
	int judge = 1;
	for (;;)
	{
		scanf("%f%c", &k, &v);
		if (judge == 1)
			sum += k;
		else
			sum -= k;
		if (v == '+')
			judge = 1;
		else if (v == '-')
			judge = -1;
		else if (v == ';')
			break;
		else
		{
			printf("error");
			return 0;
		}
	}
	printf("%f", sum);
    return 0;
}