#include <stdlib.h>
#include "main.h"

/**
* _strdup - returns a pointer to a newly allocated space in memory
* which contains a copy of the string given as a parameter
* @str: string to be duplicated
*Return: pointer to a newly allocated space in memory
**/

char *_strdup(char *str)
{
	char *x;
	int y, z;

	if (str == NULL)
		return (NULL);
	for (y = 0; str[y] != '\0'; y++) /*determine number of characters in str*/
	{
		continue;
	}

	x = malloc(y * sizeof(*x) + 1);
	if (x == NULL) /*confirm malloc did not fail*/
	{
		return (NULL);
	}

	for (z = 0; z < y; z++)
	{
		x[z] = str[z];
	}

	x[z] = '\0';
	return (x);
}
