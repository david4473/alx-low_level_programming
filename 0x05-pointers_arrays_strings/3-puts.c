#include "main.h"

/**
 *_puts - displays a string
 *@str: argument
 *Return: always 0
 */

void _puts(char *str)
{
	int i;
	int lenght = 0;

	while (str[lenght] != '\0')
	{
		lenght++;
	}

	for (i = 0; i < lenght; i++)
	{
		_putchar(str[i]);
	}

	_putchar('\n');
}
