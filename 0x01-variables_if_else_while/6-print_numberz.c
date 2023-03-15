#include <stdio.h>

/**
 * main - prints numbers from 0 to 9 then new line
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int x; 

	for (x = '0'; x <= '9', x++)
	{
		putchar(x);
	}

	putchar('\n');

	return (0);
}
