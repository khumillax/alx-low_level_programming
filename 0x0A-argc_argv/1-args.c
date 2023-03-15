#include <stdio.h>

/**
* main - prints the number of arguments passed in to it
* @argc: argument counter
* @argv: pointer to array of arguments
* Return: always 0
**/

int main(int argc, char *argv[])
{
	(void)argv; /*void unused*/
	printf("%d\n", (argc - 1));
	return (0);
}
