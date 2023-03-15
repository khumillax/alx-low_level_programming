#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
* numchecker - verifies if string has only numbers
* @s: string to be checked
* Description: return 1 if only numbers in string, 0 if not
* Return: 1 if only numbers, 0 if not
**/

int numchecker(char *s)
{
	int x;

	for (x = 0; s[x] != '\0'; x++)
	{
		if (s[x] < '0' || s[x] > '9')
		return (0);
	}
	return (1);
}

/**
* main - adds positive numbers
* @argc: arguments counter
* @argv: pointer to array of arguments
* Return: always 0
**/

int main(int argc, char **argv)
{
	int sum, x;

	sum = 0;
	for (x = 1; x < argc; x++)
	{
		if (numchecker(argv[x]) == 0)
		{
			printf("Error\n");
			return (1);
		}

		if (atoi(argv[x]) <= 0)
		{
			printf("Error\n");
			return (1);
		}
		sum += atoi(argv[x]);
	}
	printf("%d\n", sum);
	return (0);
}
