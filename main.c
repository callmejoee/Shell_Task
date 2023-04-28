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
	char *command;

	status = 1;
	prompt = "$ ";

	while (status)
	{
		_print(prompt);
		line = get_line();
		argv = split_line(line);
		command = argv[0];
		status = execute_fun(argv);
		free(line);
		free(argv);
	}

	free(line);
	free(argv);
	return (0);
}
