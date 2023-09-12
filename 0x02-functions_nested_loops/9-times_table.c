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

	for (i = 48; i <= 57; i++)
	{
		for (j = 48; j <= 57; j++)
		{
			num = i * j;

			_putchar(num);

			if (j < 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
