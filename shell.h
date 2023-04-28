#ifndef SHELL_H
#define SHELL_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>



char *_strdup(char *str);
int _strcmp(char *str1, char *str2);
int _strlen(char *str);
char *_strcpy(char *dest, char *src);
void _print(char *str);
char *get_line(void);
char **split_line(char *line);
int change_dir(char **argv);
int shell_help(char **argv);
int shell_exit(char **argv);
int execute_fun(char **argv);
int num_func(void);



#endif
