#include "main.h"

/**
 *print_last_digit - prints the last digit of a number
 *@n: arguement to be returned
 *Return: always 0
 */

int print_last_digit(int n)
{
	int lastDigit;

	lastDigit = n % 10;

	if (lastDigit < 0)
	{
		lastDigit = -lastDigit;
	}

	return (lastDigit);
}
