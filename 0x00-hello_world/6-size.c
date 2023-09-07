#include <stdio.h>

/**
 *main - Entry point
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	printf("Size of a char: %i",sizeof(char), " byte(s)");
	printf("Size of a int: %i",sizeof(int), " byte(s)");
	printf("Size of a long int: %i",sizeof(long int), " byte(s)");
	printf("Size of a long long: %i",sizeof(long long), " byte(s)");
	printf("Size of a float: %i",sizeof(float), " byte(s)");
	return (0);
}
