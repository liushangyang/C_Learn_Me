#include<stdio.h>

int main(void) {
	int i, n;
	i = 1;
	printf("请输入你所需要的平方表长度\n");
	scanf_s("%d", &n);
	while (i<=n)
	{
		printf("%10d%10d", i, i * i);
		i++;
	}
	return 0;
}