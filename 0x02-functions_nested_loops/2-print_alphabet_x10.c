#include "main.h"

/**
 * print_alphabet_1-x - print_alphabet 10 times.
 * Re4turn: void
 */

void print_alphabet_x10(void)
{
	int i;
	char c;

	for (i = 0; i <= 9; i++)
	{
		for (c = 'a'; c <= 'z'; c++)
		
			_putchar(c);
		
		_putchar('\n');
	}
}
