#include "shell.h"


/**
 * _putchar - writes the character c to output
 *
 * @c: The character to print
 *
 * Return: On success 1.
 *
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * _print - prints a string
 *
 * @str: pointer to string
 *
 * Return: void
 */

void _print(char *str)
{
	int i = 0;

	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
}
