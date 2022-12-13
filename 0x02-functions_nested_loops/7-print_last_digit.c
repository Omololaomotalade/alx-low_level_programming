#include "main.h"
/**
 * print_last_digit(int) - checks the last digit of a number
 * @r: the character
 * Return: last digit of r , if not 0
 */
int print_last_digit(int n)
{
	last_dig = n % 10;

		if (n > 0)
		{
			return (last_dig);
		}
		else	
		{
			return (0);
		}
}

