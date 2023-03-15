#include <stdio.h>

/**
* main - prints the file or command name
* @argc: argument counter
* @argv: pointer to array of arguments
* Return: 0
**/

int main(int argc, char *argv[])
{
	(void)argc; /* unused*/
	printf("%s\n", argv[0]);
	return (0);
}
