#include "main.h"

/**
 *print_rev - reverses a string
 *@s: argument
 *Return: always 0
 */

void print_rev(char *s)
{
	int i;
	int lenght;

	while (s[lenght] != '\0')
	{
		lenght++;
	}

	for (i = lenght; i >= 0; i--)
	{
		_putchar(s[i]);
	}

	_putchar('\n');
}
