#include<stdio.h>

int main(void) {
	int result, i;
	int Num, ShuLiang;
	printf("你有多少个数？\n");
	scanf_s("%d", &ShuLiang);
	i = 1;
	result = 0;
	while (i <= ShuLiang)
	{
		printf("现在输入第%d个数\n",i);
		scanf_s("%d", &Num);
		result = result + Num;
		i++;
	}
	printf("结果是%d", result);
	return 0;

}