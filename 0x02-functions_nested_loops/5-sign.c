#include "main.h"

/**
 * print_sign - function that prints the sign of a number.
 * @n: the num to be checked for
 * Return: 1 and print + if n is greater than zeero.
 * 0 and print 0 if n is zero.
 * -1 and print - if n is less zero.
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
}
