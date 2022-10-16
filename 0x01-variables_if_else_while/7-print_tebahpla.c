#include <stdio.h>

/**
 * main - prints required alphabet.
 * Return: Always 0 no errors
 */
int main(void)
{
	int i;

	i = 122;
	while (i > 96)
	{
		putchar(i);
		i--;
	}
	putchar('\n');
	return (0);
}
