#include <stdio.h>
/* 
 * This program prints an integer entered by the user.
 */
int main()
{
	int students;

	printf("Enter an integer: ");

	scanf("%d", &students);

	printf("Number of students is: %d\n", students);

	return 0;
}
