#include "shell.h"

/**
 * main - main function
 *
 * Return: 0 (Success)
 *
 */

int main(void)
{
	char *prompt;
	int status;
	char *line;
	char **argv;

	status = 1;
	prompt = "$ ";

	while (status)
	{
		if (isatty(STDIN_FILENO))
			_print(prompt);
		line = get_line();
		if (strncmp(line, "exit", 4) == 0)
		{
			free(line);
			exit(0);
		}
		line = handle_line(line);
		argv = split_line(line);
		status = execute_fun(argv);
		free(line);
		free(argv);
		line = NULL;
		argv = NULL;
	}
	if (line != NULL)
		free(line);
	if (argv != NULL)
		free(argv);
	return (0);
}
