#include <stdio.h>

/**
 * main - prints alphabet in lowercase
 *
 * Return: always 0 (success)
 */

int main(void)
{
	char x;

	for (x = 'a'; x <= 'z'; x++)
		putchar(x);

	putchar ('\n');
	return (0);
}
