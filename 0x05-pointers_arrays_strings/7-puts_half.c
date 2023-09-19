#include "main.h"

/**
 *puts_half - outputs half
 *@str: argument
 *Return: always 0
 */

void puts_half(char *str)
{
	int full, half;

	full = 0;

	while (str[full] != '\0')
	{
		full++;
	}

	half = full / 2;

	if (full % 2 == 1)
	{
		half++;
	}

	while (half < full)
	{
		_putchar(str[half]);
		half++;
	}
	_putchar('\n');
}
