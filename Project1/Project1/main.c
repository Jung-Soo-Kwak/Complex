#include <stdio.h>
#include "Complex.h"

int main( int argc, char* argv[])
{
	struct Complex c1, c2, result;
	c1.real = 1;
	c1.imanagine = 3;

	c2.real = 4;
	c2.imanagine =6;

	result = Complex_plus(c1, c2);
	printf("%d + %di\n", result.real, result.imanagine);
	result = Complex_minus(c1, c2);
	printf("%d + %di\n", result.real, result.imanagine);
	return 0;
}