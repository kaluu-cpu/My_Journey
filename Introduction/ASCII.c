#include <stdio.h>
/* 
 * Program to display the ASCII value of a character.
 */
int main()
{
	char C;
	printf("Enter a character: ");
	scanf("%C", &C);
	/*
	 * %c displays the actual character
	 * %d displays the integer value of the character
	 */
	printf("ASCII value of %C = %d", C, C);

	return 0;
}
