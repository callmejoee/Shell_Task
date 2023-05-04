#include "shell.h"

/**
 * remove_double_quotes - as the name suggests
 *
 * @str: string
 *
 * Return: void
 *
 */

void remove_double_quotes(char *str)
{
	int i, j;
	int len = strlen(str);

	for (i = 0, j = 0; i < len; i++)
	{
		if (str[i] != '"')
		{
			str[j++] = str[i];
		}
	}

	str[j] = '\0';
}


/**
 * replace_pound_with_null - name too
 *
 *
 * @str: string
 *
 * Return: void
 *
 */


void replace_pound_with_null(char *str)
{
	int i;
	int len = strlen(str);

	for (i = 0; i < len; i++)
	{
		if (str[i] == '#')
		{
			str[i] = '\0';
			break;
		}
	}
}


/**
 * handle_line - function to handle the line
 *
 * @line: line
 *
 * Return: @line
 *
 */

char *handle_line(char *line)
{
	char *newline;

	newline = line;
	replace_pound_with_null(newline);
	remove_double_quotes(newline);

	return (newline);
}
