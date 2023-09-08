#include <stdio.h>

/**
 *main - Entry point
 *
 *Return: Always 0 (success)
 */

int main(void)
{
	int i;
	int j;

	for (i = 48; i <= 57; i++)
	{
		putchar(i);
	}

	for (j = 'a'; j <= 'f'; j++)
	{
		putchar(0);
	}

	putchar('\n');
	return (0);
}
