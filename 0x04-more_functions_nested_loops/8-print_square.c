#include "main.h"

/**
 * print_square - lprints n squares according n number of
 * @size: The number of squares/numbers times
 * Return: empty
 */

void print_square(int size)
{
	int x, y;

	if (size <= 0)
	{
	_putchar('\n');
	}
	else
	{
	for (x = 0; x <= size; x++)
	{
	for (y = 0; x <= size; y++)
	{
	_putchar(35);
	}
	_putchar('\n');
	}
	}
}
