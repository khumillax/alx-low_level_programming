#include <stdio.h>

/**
* main - prints the function
* @argc: counts the arguments passed
* @argv: is an agument value determiner
* Return: always 0
**/

int main(int argc, char *argv[])
{
	int x;
	(void)argc;

	for (x = 0; x < argc; x++)
		printf("%s\n", argv[x]);
	return (0);
}
