#include <stdio.h>

/**
 *main - Entry Point
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int i;

	for (i = 'a'; i < 'z'; i++)
	{
		putchar(i);
	}

	putchar('\n');
	return (0);
}
