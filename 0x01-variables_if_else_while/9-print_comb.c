#include <stdio.h>

/**
 * main - print all possible combinations of single digit nmbrs
 *
 * Return: always 0 (success)
 */

int main(void)
{
	int x;

	for (x = '0'; x <= '9'; x++)
	{
		putchar(x);

		if (x != '9')
	{
		putchar(',');
		putchar(' ');
	}
	}
	putchar('\n');
	return (0);
}
