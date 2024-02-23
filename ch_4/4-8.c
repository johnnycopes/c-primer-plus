#include <stdio.h>
#define GALLONS_IN_LITERS 3.785
#define MILE_IN_KM 1.609

int main(void)
{
	int miles_traveled;
	int gallons_gas_consumed;
	float mpg;
	float lp100km;

	printf("Enter miles traveled:\n");
	scanf("%d", &miles_traveled);
	printf("Enter gallons of gas consumed:\n");
	scanf("%d", &gallons_gas_consumed);

	mpg = miles_traveled / gallons_gas_consumed;
	lp100km = (GALLONS_IN_LITERS * 100) / (mpg * MILE_IN_KM);
	printf("Miles per gallon: %.1f\n", mpg);
	printf("Liters per 100km: %.1f\n", lp100km);
}