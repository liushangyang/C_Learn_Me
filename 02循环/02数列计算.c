#include<stdio.h>

int main(void) {
	int result, i;
	int Num, ShuLiang;
	printf("���ж��ٸ�����\n");
	scanf_s("%d", &ShuLiang);
	i = 1;
	result = 0;
	while (i <= ShuLiang)
	{
		printf("���������%d����\n",i);
		scanf_s("%d", &Num);
		result = result + Num;
		i++;
	}
	printf("�����%d", result);
	return 0;

}