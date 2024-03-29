#include <stdlib.h>
#include "main.h"

/**
 * *_calloc - allocates memory for an array
 * @nmemb: number of elements in the array
 * @size: size of each element
 * Return: pointer to allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	/*declare pointer variable*/
	char *ptr;
	unsigned int i;

	/*check that input parameters are not null*/
	if (nmemb == 0 || size == 0)
		return (NULL);

	/*reserve needed memory using malloc*/
	ptr = malloc(size * nmemb);

	/*check that malloc did not fail*/
	if (ptr == NULL)
		return (NULL);

	/*fill reserved memory with 0*/
	for (i = 0; i < (size * nmemb); i++)
	{
		ptr[i] = 0;
	}

	return (ptr);
}
