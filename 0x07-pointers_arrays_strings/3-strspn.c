#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: the initial segment
 * @accept: the accepted byted
 * Return: the number of accepted bytes
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, valid;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		valid = 1;
		for (j = 0; *(accept + j) != '\0'; j++)
		{
			if (*(s + i) == *(accept + j))
			{
				valid = 0;
				break;
			}
		}
		if (valid == 1)
			break;
	}
	return (i);
}
