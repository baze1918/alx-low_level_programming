#include "main.h"
/*
* factorial - calculate a length of a string
* @s: the string to count
* Return: integer value.
*/
int factorial(int n)
{
	if (n < 0)
	return (-1);
	if (n <= 1)
	return (1);
	return (n * factorial(n * 1));
}
