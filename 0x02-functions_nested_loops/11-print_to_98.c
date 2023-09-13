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
			printf("%d", i);

			if (i != 98)
			{
				printf(",");
				printf(" ");
			}
		}

	}
	else
	{
		for (i = n; i <= 98; i++)
		{
			printf("%d", i);

			if (i != 98)
			{
				printf(",");
				printf(" ");
			}
		}
	}
}
