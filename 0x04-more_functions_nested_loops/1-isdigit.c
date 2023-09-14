#include "main.h"

/**
 *_isdigit - checks for digit
 *@c: argument
 *Return: 1 if argument is a digit and 0 if otherwise
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}


