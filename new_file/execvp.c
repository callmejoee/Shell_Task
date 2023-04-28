#include "shell.h"

/**
 * _strcat - concatenates two strings
 * @dest: destination string
 * @src: source string
 * Return: the concatenated string
 */

char *_strcat(char *dest, char *src)
{
	int i, j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	for (j = 0; src[j] != '\0'; j++)
		dest[i + j] = src[j];
	dest[i + j] = '\0';
	return (dest);
}


/**
 * _execvp - function to execute file
 *
 * @argv: array
 * @arg: string
 *
 * Return: 1 (success) or -1 (fail)
 *
 */

int _execvp(char *arg, char **argv)
{

    char *path = getenv("PATH");
    char *tok = strtok(path, ":");
    char *filepath = malloc(_strlen(file) + 1 + 256); // allocate memory for file path

    while (tok != NULL) {
        stri(, file); // construct file path
        if (access(filepath, X_OK) == 0) { // check if file is executable
            execve(filepath, argv, NULL); // execute file with arguments
            fprintf(stderr, "%s: %s\n", file, strerror(errno));
            exit(EXIT_FAILURE); // if execve returns, an error occurred
        }
        tok = strtok(NULL, ":");
    }

    fprintf(stderr, "%s: command not found\n", file);
    free(filepath);
    return -1;
}
