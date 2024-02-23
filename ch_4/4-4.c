#include <stdio.h>

int main(void)
{
	char name[30];
	float height_inches, height_feet;

	printf("Enter your name and your height (in inches):\n");
	scanf("%s %f", name, &height_inches);
	height_feet = height_inches / 12;
	printf("%s, you are %.2f feet tall.\n", name, height_feet);

	return 0;
}