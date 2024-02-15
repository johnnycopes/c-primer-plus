#include <stdio.h>

int main(void)
{
	float cups, pints, oz, tbsps, tsps;

	printf("Enter a volume in cups:\n");
	scanf("%f", &cups);

	pints = cups / 2;
	oz = cups * 8;
	tbsps = oz * 2;
	tsps = tbsps * 3;

	printf("%.2f cups is equivalent to:\n", cups);
	printf("%.2f pints\n", pints);
	printf("%.2f oz\n", oz);
	printf("%.2f tbsps\n", tbsps);
	printf("%.2f tsps\n", tsps);

	return 0;
}