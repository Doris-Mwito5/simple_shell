#include "shell.h"
/**
 * concate_command - A program that appends inputs global variable paths
 * @dir_path: the concatenating string directory
 * @command: the concatenating command
 * Return: returns the directory of the appended string
 */
char *concate_command(char *dir_path, char *command)
{
	int i, j = 0, L1, L2;
	char *command_path = NULL;

	if (dir_path == NULL || command == NULL)
		return (NULL);

	L1 = _strlen(dir_path);
	L2 = _strlen(command);
	command_path = malloc(L1 + L2 + 2);
	if (command_path == NULL)
		return (NULL);
	for (i = 0; dir_path[i] != '\0'; i++)
	{
		command_path[i] = dir_path[i];
	}
	if (dir_path[i - 1] != '/')
	{
		command_path[i] = '/';
		i++;
	}
	while (command[j] != '\0')
	{
		command_path[i + j] = command[j];
		j++;
	}
	command_path[i + j] = '\0';
	return (command_path);
}
