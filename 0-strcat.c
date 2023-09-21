#include "main.h"

/**
 *_strcat - concatenate strings
 *@dest: argument
 *@src: argument
 *Return: always 0
 */

char *_strcat(char *dest, char *src)
{
	char *ogdest = dest;

	while (*dest != '\0')
	{
		dest++;
	}

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}

	*dest = '\0';

	return (ogdest);
}
