#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */

/**
 * main - Prints the alphabet.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alphabetic[26] = "abcdefghijklmnopqrstuvwxyz";
	char upperCase[26] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int i;

	for (i = 0; i < 26; i++)
	{
		putchar(alphabetic[i]);
	}
	for (i = 0; i < 26; i++)
	{
		putchar(upperCase[i]);
	}
	putchar('\n');
	return (0);
}

