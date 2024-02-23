#include <stdio.h>
#include <float.h>

int main(void)
{
	double dub = 1.0 / 3.0;
	float flo = 1.0 / 3.0;

	printf("%.4f | %.4f\n", dub, flo);
	printf("%.12f | %.12f\n", dub, flo);
	printf("%.16f | %.16f\n", dub, flo);
	printf("%d | %d\n", DBL_DIG, FLT_DIG);

	return 0;
}