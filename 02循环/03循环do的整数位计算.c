//do语句和while不同他先执行循环体
#include<stdio.h>

int main(void) {
	int UserNum, bit;
	bit = 0;
	printf("大哥来个数吧\n");
	scanf_s("%d",&UserNum);
	do
	{
		bit++;
		UserNum = UserNum / 10;
	} while (UserNum>0);// This is law
	printf("大哥位数是%d", bit);
	return 0;

}