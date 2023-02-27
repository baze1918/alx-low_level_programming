#include "main.h"
/**
 * _strcpy - copy a string
 * @dest: Destination value
 * @src: Source value
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\n'; i++)
	{
	dest[i] = '\0';
	}
	dest[i++] = '\0';
	return (dest);
}
