#include <stdio.h>

/**
 * main - prints the numbers in base 16
 * Return: ALways 0
 */
int main(void)
{
	int num;
	char base16;

	for (num = 0; num < 10; num++)
		putchar(num + '0');

	for (base16 = 'a'; base16 <= 'f'; base16++)
		putchar(base16);

	putchar('\n');

	return (0);
}
