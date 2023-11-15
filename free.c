#include "shell.h"

/**
 * free_error - frees allocated pointers if system error occurs
 * @argv: points to a pointer to an array of pointers
 * @arg: points to a pointer to an array of characters
 *
 * Return: void
 */
void free_error(char **argv, char *arg)
{
	int i;

	for (i = 0; argv[i]; i++)
		free(argv[i]);
	free(argv);
	free(arg);
	exit(EXIT_FAILURE);
}

/**
 * free_tokens - frees memory allocated dynamically by tokenize()
 * @ptr: points to allocated memory
 *
 * Return: void
 */
void free_tokens(char **ptr)
{
	int i;

	for (i = 0; ptr[i]; i++)
		free((ptr[i]));
	free(ptr);
}


/**
 * free_path - Frees the global variable containing the PATH environment
 *              variable value
 *
 * Return: Null
 */
void free_path(void)
{
	if (environ != NULL)
	{
		size_t i = 0;

		while (environ[i] != NULL)
		{
			if (_strncmp(environ[i], "PATH=", 5) == 0)
			{
				free(environ[i]);
				environ[i] = NULL;
				break;
			}
			i++;
		}
	}
}