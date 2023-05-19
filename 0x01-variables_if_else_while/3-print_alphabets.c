#include <stdio.h>

/**
 * main - print alphabet in upper and lowe case
 *
 * Return: Always 0
 */
int main(void)
{
	char ch;
	char my_ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);

	for (my_ch = 'A'; my_ch <= 'Z'; my_ch++)
		putchar(my_ch);

	putchar('\n');

	return (0);
}
