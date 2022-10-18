#include "main.h"

/**
 * print_alphabet - english alphabet in lower case.
 */

void print_alphabet(void);

{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
		_putchar(alphabet);

	_putchar('\n');
}
