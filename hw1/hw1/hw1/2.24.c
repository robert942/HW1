#include <stdio.h>
#include <stdlib.h>

int m3(void)
{
	int a;

	printf("�п�J�@�Ӿ��:\n");
	scanf_s("%d", &a);

	if (a % 2 == 0) 
		printf("%d�O����",a);
	
	else 
		printf("%d�O�_��",a);
}