#include "shell.h"


/**
 * _strcpy - copies a string from one to another
 *
 * @dest: destination string
 * @src: source string
 *
 * Return: @dest
 *
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}


/**
 * _strlen - function to print the length of the string
 *
 * @str: string
 *
 * Return: length
 *
 */

int _strlen(char *str)
{
	int counter = 0;

	while (str[counter] != '\0')
		counter++;
	return (counter);
}


/**
 * _strcmp - function to compare two strings
 *
 * @str1: string one
 * @str2: string two2
 *
 * Return: 1 if the two strings are the same else return 0
 *
 */

int _strcmp(char *str1, char *str2)
{
	int i = 0;

	while (str1[i] != '\0' && str2[i] != '\0')
	{
		if (str1[i] != str2[i])
			return (0);
		i++;
	}
	return (1);
}

/**
 * _strdup - function to allocate memory for a copy of a string
 *
 * @str: string to be duplicated
 *
 * Return: pointer to deuplicated string
 *
 */

char *_strdup(char *str)
{
	int i;
	int len = 0;
	char *str_dup;

	if (str == NULL)
		return (NULL);

	len = _strlen(str) + 1;

	str_dup = malloc(len * sizeof(char));

	if (str_dup == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
	{
		str_dup[i] = str[i];
	}
	str_dup[i] = '\0';
	return (str_dup);
}
