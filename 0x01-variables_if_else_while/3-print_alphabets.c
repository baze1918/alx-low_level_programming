#include <stdio.h>
/**
 * main - Entry point function programming
 *
 * Return: Alwyas 0 (Success)
 */
int main(void)
{
	int d;

	for (d = '0'; d <= '9'; d++)
	{
		putchar(d);
	if (d != '9')
	{
	putchar(', ');
	}
	}
	putchar('\n');
	return (0);
}
