#include "main.h"

/**
 *rev_string - reverses a string
 *@s: argument
 *Return: always 0
 */

void rev_string(char *s)
{
	int i, j, u;
	char tmp;

	for (i = 0; s[i] != '\0'; i++)
	;

	j = 0;
	u = i / 2;

	while (u--)
	{
		tmp = s[i - j - 1];
		s[i - j - 1] = s[j];
		s[j] = tmp;
		j++;
	}
}
