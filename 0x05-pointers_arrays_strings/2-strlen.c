#include "main.h"

/**
 * _strlen - calculate the length of a string
 * @s: the character to be check
 * owned by Noahire
 * Return: length of the integer
 */

int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}
