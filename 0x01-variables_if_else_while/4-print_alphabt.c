#include <stdio.h>

/**
 * main - prints alphabet in lowercase and a new line
 *
 * Return: always 0 (success)
 */

int main(void)
{
	char x;

	for (x = 'a'; x <= 'z'; x++)
	{
		if (x != 'e' && x != 'q')
		{
			putchar(x);
		}
	}

	putchar('\n');

	return (0);
}
