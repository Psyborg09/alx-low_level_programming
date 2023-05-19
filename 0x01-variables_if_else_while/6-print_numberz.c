#include <stdio.h>

/**
 * main - prints single digits in base 10 using putchar
 * Return: Always 0
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
		putchar(i + '0');

	putchar('\n');

	return (0);
}
