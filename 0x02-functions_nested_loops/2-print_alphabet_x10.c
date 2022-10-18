#include "main.h"

/**
 * print_alphabet_x10 - Prints the alphabets in lowercase
 */

void print_alphabet_x10(void)
{
		char la;
		int n = 1;

		while
			(n <= 10) {

			for (la = 'a'; la <= 'z'; la++)
			{
				_putchar(la);
				_putchar('\n');
			}
			n++;
		}
}
