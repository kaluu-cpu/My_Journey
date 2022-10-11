#include <stdio.h>
/*
 * Program to display the size of variables.
 */
int main()
{
	int integers;
	float floating;
	char character;
	double doubles;

	printf("Size of int: %lu bytes \n", sizeof(integers));
	printf("Size of float: %lu bytes \n", sizeof(floating));
	printf("Size of char: %lu bytes \n", sizeof(character));
	printf("Size of double: %lu bytes\n", sizeof(doubles));

	return 0;
}
