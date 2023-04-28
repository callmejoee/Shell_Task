#include "shell.h"

/* Prototypes */

int change_dir(char **argv);
int shell_help(char **argv);
int shell_exit(char **argv);


/* built in function names */

char *builtin_names[] = { "cd", "help", "exit"};

int (*builtin_func[]) (char **) = {&change_dir, &shell_help, &shell_exit};

/**
 * num_func - function to return the num of function in the builin_names array
 *
 * Return: num
 *
 */

int num_func()
{
	return (sizeof(builtin_names) / sizeof(char *));
}

/**
 * change_dir - function to change dir
 *
 * @argv: array of functions
 *
 * Return: 1 Success
 *
 */


int change_dir(char **argv)
{
	int i;

	if (argv[1] == NULL)
	{
		perror("Expected argument\n");
	}
	else
	{
		i = chdir(argv[1]);
		if (i != 0)
			perror("Error couldn't change file");
	}
	return (1);
}


/**
 * shell_help - function for help
 *
 * @argv: array of functions
 * Return: 1
 *
 */

int shell_help(char **argv)
{
	int i = 0;
	char *func;
	
	(void)argv;

	_print("Youssef's shell");
	_print("Following are built in");

	for (i = 0; i < num_func(); i++)
	{
		func = builtin_names[i];
		_print("  ");
		_print(func);
		_print("\n");
	}

	return (1);
}

/**
 * shell_exit - function to exit
 *
 * @argv: array of functions
 * @Return: void
 *
 */

int shell_exit(char **argv)
{
	(void)argv;
	exit(0);
}



/**
 * execute_fun - function to execute either built in functions or run
 *
 * @argv: array of parameters
 *
 * Return: 1 (Success)
 *
 */

int execute_fun(char **argv)
{
	int i;

	if (argv[0] == NULL)
		return (1);

	for (i = 0; i < num_func(); i++)
	{
		if (_strcmp(argv[0], builtin_names[i]) == 1)
				return (builtin_fun[i](argv));
	}

	return(open_fun(argv));
}
