#include <stdio.h>

/**
 *main - Entry point
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	printf("Size of a char: %i", sizeof(char), " byte(s)\n");
	printf("Size of a int: %i", sizeof(int), " byte(s)\n");
	printf("Size of a long int: %i", sizeof(long int), " byte(s)\n");
	printf("Size of a long long: %i", sizeof(long long), " byte(s)\n");
	printf("Size of a float: %i", sizeof(float), " byte(s)\n");
	return (0);
}
