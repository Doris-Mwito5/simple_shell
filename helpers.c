#include <stdlib.h>
#include <unistd.h>
#include "shell.h"

/**
* _puts - this prints a string which is followed by a new line to stdout.
*
* @str: the string to be printed
* Return: void
*/

void _puts(char *str)
{
	int len;
	int c;

	len = _strlen(str);

	for (c = 0; c < len; c++)
	{
		_putchar(str[c]);
	}

	_putchar('\n');
}

/**
* *_strcpy - copies the string pointed by @src, including termination of null
* byte '\0' to the buffer pointed by @dest
*
* @dest: buffer to copy string to
* @src: pointer to string being copied
* Return: buffer pointed by @dest
*/

char *_strcpy(char *dest, char *src)
{
	/**
	* Assuming an array of characters char src[6] = "Betty";
	* and an empty array of characters char dest[6];
	* we can copy each element in the src array to dest array
	* by referencing each element in the src array by its index.
	*/

	int index = 0;

	while (index <= _strlen(src))
	{
		dest[index] = src[index];
		index++;
	}

	return (dest);
}

/**
* *_strcat - concatenates the string pointed by @src
* to the string pointed to by @dest
* @src: pointer to second string
* @dest: pointer to first string
*
* Return: dest
*/

char *_strcat(char *dest, char *src)
{
	int index_1, index_2;

	/**
	* point to concat src string
	* loop over the dest string to determine
	* the length of the string to be the starting
	*
	*/

	for (index_1 = 0; dest[index_1] != '\0'; index_1++)
		;
	/**
	* copy characters from src string to the position in
	* the dest string using the length of dest + 1 as the
	* reference index
	*/

	for (index_2 = 0; src[index_2] != '\0'; index_2++)
	{
		dest[index_1] = src[index_2];
		index_1++;
	}

	return (dest);
}

/**
* _strlen - prints the length of a string
* @s: pointer to the string
*
* Return: length of string
*/

int _strlen(const char *s)
{
	int c;

	for (c = 0; s[c] != '\0'; c++)
		;
	return (c);

}
