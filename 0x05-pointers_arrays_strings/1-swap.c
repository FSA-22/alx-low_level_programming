#include "main.h"

/**
 * swap_int - swaps  values of 2 int
 * @a: a int
 * @b: b int
 */

void swap_int(int *a, int *b);
{
	int q;

	q = *a;
	*a = *b;
	*b = q;
}
