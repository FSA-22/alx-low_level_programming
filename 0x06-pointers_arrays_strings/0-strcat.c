#include "main.h"
#include <stdio.h>

/**
 *_strcat - concatennate 2 strings
 * @dest: add as string
 * @src: add as string
 * Return: pointer
*/

char *_strcat(char *dest, char *src)
{
	int a;
	int b;

	a = 0;
	while (dest[a] != '\0')
	{
		a++;
	}
	b = 0;
	while (src[b] != '\0')
	{
		dest[a] = src[b];
		a++;
		b++;
	}
	dest[i] = '\0';
	return (dest);
}

