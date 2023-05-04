#include "shell.h"


/**
 * open_fun - function to execute
 *
 * @argv: arg
 *
 * Return: 1 (Success)
 *
 */

int open_fun(char **argv)
{
	int status;
	pid_t pid;

	pid = fork();

	if (pid == 0)
	{
		if (execvp(argv[0], argv) == -1)
			return (0);
	}
	else if (pid < 0)
		perror("Error pid");
	else
	{
		do {
			waitpid(pid, &status, WUNTRACED);
		} while (!WIFEXITED(status) && !WIFSIGNALED(status));
	}

	return (1);
}
