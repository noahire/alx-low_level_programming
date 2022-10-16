#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int a = 0;

	int b = 1;

	while
		(a < 10) {
			while
				(b < 10) {
				putchar(a + '0');
				putchar(b + '0');
				if (a < 8)
					{
					putchar(',');
					putchar(' ');
				}
				b++;
			}
			a++;
			b = a + 1;
		}
	putchar('\n');
	return (0);
}
