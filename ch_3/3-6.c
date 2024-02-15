#include <stdio.h>

int main(void)
{
	float amount_quarts, amount_grams, amount_molecules;

	printf("Enter an amount of water (in quarts):\n");
	scanf("%f", &amount_quarts);
	amount_grams = 950 * amount_quarts;
	amount_molecules = amount_grams / 3.0e-23;
	printf("The number of water molecules in %f quarts is %e molecules\n", amount_quarts, amount_molecules);

	return 0;
}