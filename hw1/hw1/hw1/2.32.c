#include <stdio.h>
#include <stdlib.h>

int m8(void) 
{
	float height, weight, bmi;

	printf("輸入你身高(公尺): \n");
	scanf_s("%f", &height);
	printf("輸入你的體重(公斤): \n");
	scanf_s("%f", &weight);

	bmi = weight / (height * height);
	printf("你的BMI為: %.2f\n", bmi);

	if (bmi < 18.5) 
		printf("過輕");
	
	else if (bmi < 24.9) 
		printf("一般");
	
	else if (bmi < 29.9) 
		printf("過重");
	
	else if (bmi > 30) 
		printf("肥胖");
	
	return 0;
}