#include "main.h"

/**
 * _puts - prints a string
 * @str: printing string
 */

void _puts(char *str)
{

	while (*str != '\0')
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
