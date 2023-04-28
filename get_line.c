#include "shell.h"

/**
 * get_line - this is a function to get the line;
 *
 * Return: line inputted ffrom the user
 *
 */

char *get_line(void)
{
	char *line_ptr = NULL;
	size_t buffer_size = 0;
	int chars_read;

	chars_read = getline(&line_ptr, &buffer_size, stdin);

	if (chars_read == -1)
	{
		if (feof(stdin))
		{
			exit(EXIT_SUCCESS);
		}
		else
		{
			perror("Get line error");
			exit(EXIT_FAILURE);
		}
	}

	return (line_ptr);

}
