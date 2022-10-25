#include <unistd.h>

/**
 * _putchar - character c to stdout
 * @: print char
 * Return: on successss 1
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
