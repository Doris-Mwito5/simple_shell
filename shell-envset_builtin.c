#include "shell.h"

/**
 * shell_setenv - an environment variable value is set
 * @args: Arguments (name and value of the environment variable)
 *
 * Return: Null
 */
int shell_setenv(char **args)
{
	char *name, *value;

	if (args[1] == NULL || args[2] == NULL)
	{
		_puterror("Usage: setenv VARIABLE VALUE\n");
		return (-1);
	}

	name = args[1];
	value = args[2];

	if (setenv(name, value, 1) != 0)
	{
		_puterror("setenv");
		return (-1);
	}
	return (0);
}

/**
 * shell_unsetenv - Unset the environment variable highlighted
 * @args: Arguments (name of the environment variable)
 *
 * Return: Null
 */
int shell_unsetenv(char **args)
{
	char *name;

	if (args[1] == NULL)
	{
		_puterror("Usage: unsetenv VARIABLE\n");
		return (-1);
	}

	name = args[1];

	if (unsetenv(name) != 0)
	{
		_puterror("unsetenv");
	}
	return (0);
}
