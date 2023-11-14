#include "shell.h"

/**
 * _getenv - a program that gets the environment that matches input string
 * @input: the string input
 * @environ: the variables
 * Return: returns the string environmental variables
 */
char *_getenv(char *input, char **environ)
{
	register int i = 0;
	char *tok, *right;

	while (environ[i])
	{
		tok = _strtok(environ[i], "=");
		if (_strcmp(tok, input) == 0)
		{
			right = _strtok(NULL, "=");
			return (right);
		}
		i++;
	}
	return (NULL);
}
