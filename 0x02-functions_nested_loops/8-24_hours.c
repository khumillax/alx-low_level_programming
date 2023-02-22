#include "main.h"

/**
 * jack_bauer - prints every minute of the day of Jack Bauer
 * starting from 00:00 to 23:59
 */
void jack_bauer(void)
{
	int a, bauer;

	a = 0;

	while (a < 24)
	{
		bauer = 0;
		while (bauer < 60)
		{
			_putchar((a / 10) + '0');
			_putchar((a % 10) + '0');
			_putchar(':');
			_putchar((bauer / 10) + '0');
			_putchar((bauer % 10) + '0');
			_putchar('\n');
			bauer++;
		}
		a++;
	}
}
