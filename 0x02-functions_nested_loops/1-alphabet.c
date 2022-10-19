#include "main.h"

/**
 * print_alphabet: a function that prints the alphabets
 *
 * Return: Always 0 (Succes)
 */
void print_alphabet(void)
{
	int cr;

	for (cr = 'a'; cr <= 'z'; cr++)
	{
		_putchar(cr);
	}
	_putchar('\n');
}
