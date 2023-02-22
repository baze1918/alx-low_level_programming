#include <stdio.h>
/**
 * main - prints the first 52 fibonacci number
 * Return: no
 */

int main(void)
{
	int i = 0;
	long j = 1, k = 2;

	while (i < 50)
	{
	if (i == 0)
	printf("%d\n", j);
	else if (i == 1)
	printf("%d\n", k);
	else
	{
	k = j + 1;
	j = k - j;
	printf(",%d", k);
	++i;
	}
	printf('\n');
	return (0);
}

