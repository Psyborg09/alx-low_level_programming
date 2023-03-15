#include <stdlib.h>
#include "main.h"

/**
 * *create_array - creates an array of size char and assign char c,
 * and initializes it with a specific char
 * @size: size of the array
 * @c: char to assign to c
 *Description: create array of size size and assign char c
 * Return: pointer to the array (Success), NULL (if failed)
 */
char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int i = 0;

	if (size == 0)
		return (NULL);

	p = (char *) malloc(sizeof(char) * size);

	if (p == NULL)
		return (NULL);

	while (i < size)
	{
		p[i] = c;
		i++;
	}

    	p[i] = '\0';

	return (p);
}
