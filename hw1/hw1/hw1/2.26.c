#include <stdio.h>
#include <stdlib.h>

int m5(void) 
{
	int num1, num2;

	printf("請輸入兩個數: \n");
	scanf_s("%d%d", &num1, &num2);

	if (num2 % num1 == 0) 
		printf("%d是%d 的倍數\n", num2, num1);
	
	else
		printf("%d不是%d 的倍數\n", num2, num1);
	
}