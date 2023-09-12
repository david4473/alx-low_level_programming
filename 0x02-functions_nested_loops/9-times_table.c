#include "main.h"

/**
 *times_table - prints multiplication table for 9
 *
 *Return: always 0
 */

void times_table(void)
{
	int i;
	int j;
	int num;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			num = i * j;

			if (num > 10)
			{
				_putchar('0' + (num / 10));
			}

			_putchar('0' + (num % 10));

			if (j < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
