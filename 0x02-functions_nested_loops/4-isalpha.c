#include "main.h"
/**
 * _isalpha - function that checks for alphabetic character.
 * Return: 1 if c is a letter, otherwise 0.
 * @c: validate c char.
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1)
	else
		return (0);
}

