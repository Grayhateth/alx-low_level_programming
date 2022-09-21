#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: string pointer to passed to this function
 * Return: returns length of the string
 */

int _strlen(char *s)
{
	int len = 0;

	while (*(s + len) != '\0')
		len++;

	return (len);
}
