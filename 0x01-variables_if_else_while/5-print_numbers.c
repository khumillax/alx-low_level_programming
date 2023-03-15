#include <stdio.h>

/**
 * main - pritn single digits of base 10 from 0
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	char x;

	for (x = '0'; x <= '9'; x++)

	{
		putchar(x);
	}

	putchar('\n');
	
	return (0);
}
