#include <stdio.h>
#include <stdlib.h>

/**
 * main - product of 2 numbers
 * @argc: arguments counter
 * @argv: pointer to array of arguments
 * Return: 0 on success and 1 on failure
 */

int main(int argc, char *argv[])
{
	int x, y, z, product;

	if (argc != 3)
	{
		printf("%s\n", "Error");
		return (1);
	}

	for (x = 0; x < argc; x++)
	{
		y = atoi(argv[1]); /*Converts second argv to integer*/
		z = atoi(argv[2]); /*Converts third argv to integer*/
	}

	product = y * z;
	printf("%d\n", product);
	return (0);
}
