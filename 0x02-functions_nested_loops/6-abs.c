#include <stdio.h>
#include "main.h"

/**
 *_abs - computes absolute value of an inter
 *@n: arguement to compute
 *Return: always 0
 */

int _abs(int n)
{
	if (n < 0)
	{
		return (-n);
	}
	else
	{
		return (n);
	}
}
