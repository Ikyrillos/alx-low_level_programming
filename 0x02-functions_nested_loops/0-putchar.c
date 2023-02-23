#include "main.h"
/**
 * main - Prints _putchar as a message.
 *
 * Return: 0 nno errors
 */
int main(void)
{
	int str[] = {95, 112, 117, 116, 99, 104, 97, 114};
	int count, length;

	length = sizeof(str) / sizeof(int);
	for (count = 0; count < length; count++)
	{
		_putchar(str[count]);
	}
	_putchar('\n');
	return (0);
}
