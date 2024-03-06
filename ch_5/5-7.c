#include <stdio.h>

double cube(double n);

int main(void)
{
	double num;

	printf("Enter a number to cube:\n");
	scanf("%lf", &num);
	printf("Your number cubed: %.2lf\n", cube(num));

	return 0;
}

double cube(double n)
{
	return n * n * n;
}
