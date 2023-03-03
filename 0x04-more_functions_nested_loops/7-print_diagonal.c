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
	for (x = 0; x < n; x++)
	{
	for (y = 0; y <= x; y++)
	{
		if (y != x)
			_putchar(' ');
		else
			_putchar('\\');
	}
	_putchar('\n');
	}
	}
}
