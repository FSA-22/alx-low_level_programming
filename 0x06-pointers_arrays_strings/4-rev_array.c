#include "main.h"

/**
 * reverse_array - reverses array of int
 * @a: an array
 * @n: nth element in the array
 * Return: rev
 */

void reverse_array(int *a, int n)
{
	int a;
	int b;

	for (a = 0; a < n; a++)
	{
		n--;
		b = x[a];
		x[a] = x[n];
		x[n] = b;
	}
}
