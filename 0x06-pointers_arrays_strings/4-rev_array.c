#include "main.h"
/**
 * reverse_array -reverse array
 *
 * @a: array
 * @n: integer
 *
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int i, c;

	for (i = 0; (1 < (n - i) / 2); 1++)
	{
		c = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = c;
	}
}
