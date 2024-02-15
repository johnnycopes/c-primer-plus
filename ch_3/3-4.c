#include <stdio.h>

int main(void)
{
	float num;

	printf("Enter a floating point number:\n");
	scanf("%f", &num);
	printf("Fixed-point notation %f\n", num);
	printf("Exponential notation notation %e\n", num);
	printf("p notation (hexadecimal, power of 2): %a\n", num);

	return 0;
}