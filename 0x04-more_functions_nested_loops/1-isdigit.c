#include "main.h"
/**
 * _isdigit - Print lowercase letter
 *@c: - character to check
 * Return: 1 (success) or 0 (failure)
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);

}
