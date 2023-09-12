#include <stdio.h>
#include "main.h"

/**
 *islower - checks for is arg is lowercase
 *Return: always 0
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return 1;
	}
	else{
		return 0;
	}
}
