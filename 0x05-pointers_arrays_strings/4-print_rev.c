#include "main.h"

/**
 *print_rev - reverses a string
 *@s: argument
 *Return: always 0
 */

void print_rev(char *s)
{
	char *lc = s;

	while (*lc != '\0')
	{
		lc++;
	}

	lc--;

	while (lc >= s)
	{
		_putchar(*lc);
		lc--;
	}

	_putchar('\n');
}
