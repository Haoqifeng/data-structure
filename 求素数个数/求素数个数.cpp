#include <stdio.h>
//��1��n������֮�����е�����
int main(void)
{
	int n, j, i;
	int m=0;
	scanf("%d", &n);
	for (i = 2; i < n; i++)
	{
		//�ж�i�Ƿ�Ϊ����������������ǲ����
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