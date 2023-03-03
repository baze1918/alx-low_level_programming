#include "main.h"

/**
 * _isupper - uppercase  letters
 * @c: Char to check
 * Return: 1 for uper letter or 0 for any else
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
