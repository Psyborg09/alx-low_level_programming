#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabet, in lowercase,
 * followed by a new line
 */
void print_alphabet_x10(void)
{
	int xten;
	char alpha;

	for (xten = 0; xten < 10; xten++)
	{
		for (alpha = 'a'; alpha <= 'z'; alpha++)
		{
			_putchar (alpha);
		}
		_putchar ('\n');
	}
}
