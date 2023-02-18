#include <stdio.h>

/**
 * main - prints numbers between 0 - 9.
 * Return: Always 0 no erros
 */
int main(void)
{
	int i;

	i = 48;
	while (i < 58)
	{
		putchar(i);
		i++;
	}

	putchar('\n');
	return (0);
}
