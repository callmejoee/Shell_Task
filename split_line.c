#include "shell.h"

#define BUFF_SIZE 1024
#define DELIM " \t\r\n\a"

/**
 * split_line - function to split and tokenize the function
 *
 * @line: line to break and tokenize
 *
 * Return: array of tokens
 *
 */


char **split_line(char *line)
{
	int buffer_size = BUFF_SIZE, i = 0;
	char *token;
	char **tokens;

	tokens = malloc(buffer_size * sizeof(char *));

	if (!tokens)
	{
		perror("allocation error\n");
		exit(EXIT_FAILURE);
	}
	token = strtok(line, DELIM);
	while (token != NULL)
	{
		tokens[i] = token;
		i++;

		token = strtok(NULL, DELIM);
	}
	tokens[i] = '\0';
	return (tokens);
}
