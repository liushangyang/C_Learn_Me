//do����while��ͬ����ִ��ѭ����
#include<stdio.h>

int main(void) {
	int UserNum, bit;
	bit = 0;
	printf("�����������\n");
	scanf_s("%d",&UserNum);
	do
	{
		bit++;
		UserNum = UserNum / 10;
	} while (UserNum>0);// This is law
	printf("���λ����%d", bit);
	return 0;

}