#include "main.h"

/**
 *print_most_numbers - prints numbers 0 to 9 with an exception of 4 and 2
 *
 *Return: always 0
 */

void print_most_numbers(void)
{
	int i;

	for (i = 48; i <= 57; i++)
	{
		if (i != 52 && i != 50)
		{
			_putchar(i + '0');
		}
	}
}
