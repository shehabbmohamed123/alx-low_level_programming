#include "main.h"

/**
 * print_sign - return the sign of a number
 * @n : a number to run the test on
 * Return: 1 if the number is positive -1 if negative
 * 0 if the number is 0
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else
	{
		_putchar(45);
		return (-1);
	}
}
