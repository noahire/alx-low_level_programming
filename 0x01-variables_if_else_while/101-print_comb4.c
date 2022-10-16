#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int a = 0;

	int b = 0;

	int c = 0;

	while
		(a < 10) {
			while
				(b < 10) {
					while
						(c < 10) {
							putchar(a + '0');
							putchar(b + '0');
							putchar(c + '0');
							if (a < 7)
								{
								putchar(',');
								putchar(' ');
							}
							c++;
						}
					b++;
					c = b + 1;
				}
			a++;
			b = a + 1;
			c = b + 1;
		}
	putchar('\n');
	return (0);
}
