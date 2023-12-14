

#include <stdio.h>

int main()
{
	double a, b, res;
	printf("Type 2 numbers: ");
	scanf("%lf %lf",  &a, &b);
	res = a + b;
	printf("Sum = %.16g\n", res);
	res = a - b;
	printf("Difference = %.16g\n", res);
	res = a * b;
	printf("Product = %.16g\n", res);
	res = a / b;
	printf("Quotient = %.16g\n", res);
    return 0;
}
