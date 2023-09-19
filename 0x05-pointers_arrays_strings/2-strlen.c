#include "main.h"

/**
 *_strlen - returns lenght of string
 *@s: argument
 *Return: always 0
 */

int _strlen(char *s)
{
	int lenght = 0;

	while (s[lenght] != '\0')
	{
		lenght++;
	}

	return (lenght);
}
