#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - creates an array of chars and initializes
 * @size: size of array
 * @c: char integer
 * Return: pointer to array or NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
	char *pt = malloc(size);

	if (size == 0 || pt == 0) /*check malloc was successful*/
		return (0);
	while (size--)
		pt[size] = c;
	return (pt);
}
