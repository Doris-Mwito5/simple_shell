#include "text.h"

/**
 * _strlen - function returns the length of a string
 *
 * @msg: string
 *
 * Return: length of the string
 **/
int _strlen(char *msg)
{
	int i;

	for (i = 0; msg[i] != '\0'; i++)
		;

	return (i);
}

/**
 * _strcat - Concatenates two strings
 *
 * @dest: String concatenate
 * @src: Source string
 *
 * Return: A string concatenate
 */
char *_strcat(char *dest, char *src)
{
	int dest1, i;

	dest1 = _strlen(dest);

	for (i = 0; src[i] != '\0'; i++, dest1++)
		dest[dest1] = src[i];

	dest[dest1] = '\0';

	return (dest);
}

/**
 * _strcpy - function used to copy a string to another
 *
 * @dest: destination copy
 * @src: Source for copy.
 *
 * Return: the function Return the value of dest
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
 * _strdup - pointer to a newly alloc'd space in memory
 *
 * @str: the string to copy
 *
 * Return: the copied string
 **/
char *_strdup(char *str)
{
	int size, i;
	char *dest;

	if (str == NULL)
		return (NULL);

	size = _strlen(str) + 1;
	dest = malloc(size * sizeof(char));
	if (dest == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		*(dest + i) = *(str + i);

	/* (dest + i) = 0; */

	return (dest);
}

/**
 * _strcmp - this function compares two strings
 *
 * @s1: first String
 * @s2: second string
 *
 * Return: Int
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] != '\0')
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);

		i++;
	}

	return (0);
}
