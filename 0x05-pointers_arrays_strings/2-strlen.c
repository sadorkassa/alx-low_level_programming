#include "holberton.h"

/**
 * _strlen - return the length of the string
 * @s: String to count
 *
 * Return: length of string
 */

int _strlen(char *s)
{
	int c = 0;

	for (; *s != '\0'; s++)
	{
		c++;
	}

	return (c);
}
