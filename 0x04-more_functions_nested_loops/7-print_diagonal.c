#include "main.h"

/**
 * print_diagonal - Deraws a diagonal linse according to parameter
 * @n: The number of times to brint lines
 * Return: empty
 */

void print_diagonal(int n)
{
	int x, y;

	if (n <= 0)
	{
	_putchar('\n');
	}
	else
	{
	for (x = 0; x <= n; n++)
	{
	for (x = 0; x <= n; n++)
	{
	_putchar(32);
	}
	_putchar(92);
	_putchar('\n');
	}
	}
}
