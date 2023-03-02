#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
* main - prints a text according number
* Return: Always (Success)
*/

int main(void)
{
	int n, lastd;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastd = n % 10;

	if (lastd > 5)
	{
		printf("last digit of %d is %d and is greater than 5\n", n, lasted);

	}
	else if (lastd == 0)
	{
		printf("last digit of %d is %d and is  0\n", n, lasted);
	}
	else if (lastd < 6 && lastd != 0)
	{
		printf("last digit of %d is %d and is  0\n", n, lasted);
	}
	return (0);
}
