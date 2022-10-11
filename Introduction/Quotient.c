#include <stdio.h>
/*
 * Program to display quotient and remainder.
 */

int main()
{
	int dividend, divisor, quotient, remainder;

	printf("Enter dividend: ");
	scanf("%d", &dividend);

	printf("Enter divisor: ");
	scanf("%d", &divisor);

	quotient = dividend / divisor;
	remainder = dividend % divisor;

	printf("%d / %d = %d\n", dividend , divisor, quotient);
	printf("%d = %d\n", dividend, remainder);

	return 0;
}
