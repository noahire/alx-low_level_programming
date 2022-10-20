#include "main.h"
/**
 * _isupper - Print Uppercase letter
 *@c: - character to check
 * Return: 1 (success) or 0 (failure)
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);

}
