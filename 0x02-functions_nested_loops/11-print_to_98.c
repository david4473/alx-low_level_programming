#include <stdio.h>
#include "main.h"

/**
 *print_to_98 - prints all natural number to 98
 *@n: arguement
 *Return 0
 */

void print_to_98(int n)
{

	int i;

	if (n > 98)
	{

		for (i = n; i >= 98; i--)
		{
			int digit = i;

			while (digit > 0)
			{
				_putchar('0' + digit % 10);
				digit /= 10;
			}
			if (i != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
	}
	else
	{
		for (i = n; i <= 98; i++)
		{
			int digit = i;

			while (digit > 0)
			{
				_putchar('0' + digit % 10);
				digit /= 10;
			}

			if (i != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
	}
}
