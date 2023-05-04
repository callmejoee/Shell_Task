#ifndef SHELL_H
#define SHELL_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <sys/wait.h>

extern char **environ;

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
int open_fun(char **argv);
int _execvp(char *arg, char **argv);
void replace_pound_with_null(char *str);
char *handle_line(char *line);
void remove_double_quotes(char *str);


#endif
