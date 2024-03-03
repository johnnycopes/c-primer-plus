#include <stdio.h>

int main(void)
{
	const float cm_to_in = 0.3937;
	const float in_to_ft = 12.0;
	float cm, in;
	int ft;

	printf("Enter a height in cm:\n");
	scanf("%f", &cm);

	in = cm * cm_to_in;
	ft = in / in_to_ft;
	in = in - (ft * in_to_ft);

	printf("%.1f cm = %d ft, %.1f inches\n", cm, ft, in);

	return 0;
}