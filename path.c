#include "shell.h"

/**
 * get_path - a program that returns the environmental variable path
 * Return: returns a pointer to the value
 */
char *get_path(void)
{
	return (_getenv("PATH"));
}
