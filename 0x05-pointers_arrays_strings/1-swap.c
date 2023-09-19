#include "main.h"

/**
 *swap_int - swaps value to two intergers
 *@a: argumrnt 1
 *@b: argument 2
 *Return: always 0
 */

void swap_int(int *a, int *b)
{
	int i;

	i = *a;

	*a = *b;

	*b = i;
}
