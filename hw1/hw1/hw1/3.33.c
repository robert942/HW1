#include <stdio.h>
#include <stdlib.h>

int main(void) 
{
	float kilometers, cost, average, parking, tolls, total_cost;

	printf("�`������:");
	scanf_s("%f", &kilometers);
	printf("�C�ɨT�o����:");
	scanf_s("%f", &cost);
	printf("�����C���ɤ�����:");
	scanf_s("%f", &average);
	printf("�����O:");
	scanf_s("%f", &parking);
	printf("�L���O:");
	scanf_s("%f", &tolls);

	total_cost = (kilometers / average) * cost + parking + tolls;
	printf("�}���@S��O:%.2f", total_cost);
	return 0;
}