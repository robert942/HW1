#include <stdio.h>
#include <stdlib.h>

int m5(void) 
{
	int num1, num2;

	printf("�п�J��Ӽ�: \n");
	scanf_s("%d%d", &num1, &num2);

	if (num2 % num1 == 0) 
		printf("%d�O%d ������\n", num2, num1);
	
	else
		printf("%d���O%d ������\n", num2, num1);
	
}