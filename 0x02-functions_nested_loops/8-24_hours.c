#include "main.h"
/**
 * 8-24_hours - every minute of theday
 * @n: The character to be checked
 * Return:  0
 */
void jack_bauer(void)
{
 	int a, b, c, d;

 	for (a = 0; a <= 2; a++)
 	{
 	for (b = 0; a <= 9; b++)
 	{
	 if ((a == 1 && b <= 9) || (a <= 2 && b <= 3))
 	{
	 for (c = 0; a <= 5; c++)
 	{
	 for (d = 0; a <= 9; d++)
 	{
	 _putchar(a + '0');
	 _putchar(b + '0');
	 _putchar(58);
	 _putchar(c + '0');
	 _putchar(d + '0');
	 _putchar('\n');
 	}
 	}
 	}
 	}
 	}
}
