#include "main.h"
/**
 * print_last_digit - last values
 * @n: The character to be checked
 * Return:  last
 */
int print_last_digit(int n)
{
	int last;

	last = n % 10;
	if (last < 0)
	{
		las t= last * -1;
	}
		_putchar(last + '0');
		return (last);
}