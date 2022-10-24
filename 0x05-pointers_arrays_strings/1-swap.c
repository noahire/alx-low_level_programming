#include "main.h"

/**
 * swap_int - Swap number
 * @a: first integer
 * @b: Second integer
 * owned by Noahire
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int s;

	s = *a;
	*a = *b;
	*b = s;
}
