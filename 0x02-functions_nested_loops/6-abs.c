#include "main.h"

/**
 * _abs - Function implementation for example
 *
 * description: A function for get positive value
 * @n: takes in integer type input for functin
 *
 * Return: Always 0 (success)
*/

int _abs(int n)
{
	if (n < 0)
		n = (-1) * n;
	return (n);
}
