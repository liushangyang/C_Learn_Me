#include<stdio.h>

int main(void) {
	int UserNum1, UserNum2;
	int bridgeNum1 = 0, bridgeNum2;
	int Num, i = 3;
	printf("How many numbers you want to ?\n");
	scanf_s("%d", &Num);
	printf("Input your first Number\n");
	scanf_s("%d", &UserNum1);
	printf("Now next\n");
	scanf_s("%d", &UserNum2);
	if (Num - 2 == 0)
	{
		printf("%d", UserNum1 >= UserNum2 ? UserNum1 : UserNum2);
	}
	else
	{
		bridgeNum1 = UserNum1 >= UserNum2 ? UserNum1 : UserNum2;
		while (Num - 2 > 0)
		{
			Num -= 1;
			printf("Please input next number%d\n", i);
			scanf_s("%d", &bridgeNum2);
			bridgeNum1 = bridgeNum1 >= bridgeNum2 ? bridgeNum1 : bridgeNum2;
			i += 1;
		}
		printf("%d", bridgeNum1);
	}

	return 0;
}