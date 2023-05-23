#include <stdio.h>
#include "main.h"

/**
 * main - prints the alphabet in lowercase, followed by a new line.
 *
 *Return - Always 0.
 */
int main(void)
{
	print_alphabet();
       	return (0);
}
void print_alphabet(void)
{
       	int i;
	for(i='a';i<='z';i++)
	{
		putchar(i);
	}
	putchar('\n');
}
