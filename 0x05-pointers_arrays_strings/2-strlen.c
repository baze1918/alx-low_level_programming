#include <stdio.h>
/**
 * _strlen - Returns the length of a string values.
 * @s: The string to get the length
 * Return: the length of @str.
 */
int _strlen(char *s)
{
	size_t length = 0;

	while (*s++)
	length++;
	return (length);

}
