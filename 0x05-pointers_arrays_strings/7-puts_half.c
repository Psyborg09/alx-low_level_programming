#include <stdio.h>
#include "main.h"

/**
 * puts_half - prints half of a string
 * followed by a new line
 * @str: string to be printed
 */
void puts_half(char *str)
{
	int i;
	int count = 0, length, c;

	for (i = 0; str[i] != '\0'; i++)
	{
		count++;
	}

	length = count;

	if (length % 2 == 0)
	{
		c = length / 2;
	}
	else
	{
		c = length - 1 / 2;
	}
	printf("%s\n", str + c)
}
