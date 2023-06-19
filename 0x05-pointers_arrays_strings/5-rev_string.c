#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string to be reversed
 */
void rev_string(char *s)
{
	int i, j;
	int count = 0;
	int length;
	char temp;

	for (i = 0; s[i] != '\0'; i++)
	{
		count++;
	}

	length = count;
	
	for (j = 0; j < length / 2; j++)
	{
		temp = s[j];
		s[j] = s[length - 1 - j];
		s[length - 1 - j] = temp;
	}
}
