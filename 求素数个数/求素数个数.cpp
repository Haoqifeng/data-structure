#include <stdio.h>
//求1到n个数字之间所有的素数
int main(void)
{
	int n, j, i;
	int m=0;
	scanf("%d", &n);
	for (i = 2; i < n; i++)
	{
		//判断i是否为素数，是输出，不是不输出
		for (j = 2; j < i; j++)
		{
			if (i % j == 0)
				break;
		}
		if (j == i)
			m+=1;
	}
	printf("%d\n",m);
	return 0;
}