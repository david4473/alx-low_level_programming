#include <stdio.h>
#include "main.h"

/**
 *_islower - checks for is arg is lowercase
 *@c: character argument
 *Return: always 0
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
