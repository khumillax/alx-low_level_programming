#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates memory using malloc
 * @x: amount of memory to be allocate (in bytes)
 * Return: pointer to allocated memory
 */
void *malloc_checked(unsigned int x)
{
	/*declare pointer being used*/
	int *ptr;

	/*reserve memory in heap*/
	ptr = malloc(x);

	/*if malloc doesn't fails*/
	if (ptr == NULL)
	{
		free(ptr);
		exit(98); /*end process with 98 as return value*/
	}
	return (ptr);
}
