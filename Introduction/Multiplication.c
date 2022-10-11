#include <stdio.h>
/* 
 * A program to multiply two floating numbers
 */
int main()
{
	double a, b, product;

	printf("Enter two floating numbers: ");

	scanf("%lf, %lf", &a, &b);

	product = a * b;

	printf("%lf * %lf = %lf", a, b, product);

	return 0;
}
