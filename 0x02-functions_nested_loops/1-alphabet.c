#include <stdio.h>
#include "main.h"

/**
 *print_alphabet - prints alphabet a - z
 *Return: Always 0 (success)
 */

void print_alphabet(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
