#include "shell.h"

/**
 * tokenize - t program that tokenizes a buffer
 * @buffer: bthe tokenized buffer
 * @delimiter: to be tokenized along
 * Return: returns a pointer to the tokens
 */
char **tokenize(char *buffer, char *delimiter)
{
	char **tokens = NULL;
	size_t i = 0, mcount = 10;

	if (buffer == NULL)
		return (NULL);
	tokens = malloc(sizeof(char *) * mcount);
	if (tokens == NULL)
	{
		perror("Fatal Error");
		return (NULL);
	}
	while ((tokens[i] = new_strtok(buffer, delimiter)) != NULL)
	{
		i++;
		if (i == mcount)
		{
			tokens = _realloc(tokens, &mcount);
			if (tokens == NULL)
			{
				perror("Fatal Error");
				return (NULL);
			}
		}
		buffer = NULL;
	}
	return (tokens);
}
