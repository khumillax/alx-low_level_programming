#include <stdio.h>

/**
 * main - print all the numbers for base 16. 0-9 a-f
 *
 *Return: always 0 (success)
 */

int main(void)
{
	int x;

	for (x = '0'; x <= '9'; x++)
	{
		putchar(x);
	}

	for (x = 'a'; x <= 'f'; x++)
	{
		putchar(x);
	}

	putchar ('\n');

	return (0);
}
