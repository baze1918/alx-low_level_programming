#include <stdio.h>

/**
 * main - Prints the size of various types based on
 * the coputer it si copiled and run on..
 * Return: Always 0.
 */
int main(void)
{
	int a;
	long int b;
	long long  int c;
	char d;
	float f;

	printf("zise of int: %lu byte(s)\n", sizeof(a));
	printf("zise of long int: %lu byte(s)\n", sizeof(b));
	printf("zise of long long long int: %lu byte(s)\n", sizeof(c));
	printf("zise of char: %lu byte(s)\n", sizeof(d));
	printf("zise of float: %lu byte(s)\n", sizeof(f));
	return (0);
}
