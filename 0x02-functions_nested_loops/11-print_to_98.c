#include "main.h"
#include<unsignd.h>

/**
 * print_to_98 - a function that prints all natural numbers from z to 98
 * @z:  The number to start printing from
 * Return: Always 0.
 */
void print_to_98(int z)
{
	int i, j;

	if (z <= 98)
	{
		for (i = z; i <= 98; i++)
		{
			if (i != 98)
				printf("%d, ", i);
			else if (i == 98)
				printf("%d\n", i);
		}
	} else if (z >= 98)
	{
		for (j = z; j >= 98; j--)
		{
			if (j != 98)
				printf("%d, ", j);
			else if (j == 98)
				printf("%d\n", j);
		}
	}
}
