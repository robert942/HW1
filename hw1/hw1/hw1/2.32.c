#include <stdio.h>
#include <stdlib.h>

int m8(void) 
{
	float height, weight, bmi;

	printf("��J�A����(����): \n");
	scanf_s("%f", &height);
	printf("��J�A���魫(����): \n");
	scanf_s("%f", &weight);

	bmi = weight / (height * height);
	printf("�A��BMI��: %.2f\n", bmi);

	if (bmi < 18.5) 
		printf("�L��");
	
	else if (bmi < 24.9) 
		printf("�@��");
	
	else if (bmi < 29.9) 
		printf("�L��");
	
	else if (bmi > 30) 
		printf("�έD");
	
	return 0;
}