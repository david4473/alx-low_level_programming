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

	for (i = 0; i <= 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			num = 9 * j;

			_putchar(num + '0');

			if (j != 10)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
