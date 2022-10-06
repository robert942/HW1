#include <stdio.h>
#include <stdlib.h>

int main(void) 
{
	float kilometers, cost, average, parking, tolls, total_cost;

	printf("總公里數:");
	scanf_s("%f", &kilometers);
	printf("每升汽油成本:");
	scanf_s("%f", &cost);
	printf("平均每公升公里數:");
	scanf_s("%f", &average);
	printf("停車費:");
	scanf_s("%f", &parking);
	printf("過路費:");
	scanf_s("%f", &tolls);

	total_cost = (kilometers / average) * cost + parking + tolls;
	printf("開車共S花費:%.2f", total_cost);
	return 0;
}