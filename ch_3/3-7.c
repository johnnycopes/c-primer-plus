#include <stdio.h>

int main(void)
{
	float inches;

	printf("Enter your height in inches:\n");
	scanf("%f", &inches);
	printf("You're %fcm tall.\n", inches * 2.54);

	return 0;
}