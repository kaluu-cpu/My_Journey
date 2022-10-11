#include <stdio.h>
/* A program that sums up two integers.
 */

int main()
{
	int a, b, sum;
	printf("Enter the two integers: ");

	scanf("%d, %d", &a, &b);

	sum = a + b;

	printf("%d + %d = %d", a, b, sum);

	return 0;
}
