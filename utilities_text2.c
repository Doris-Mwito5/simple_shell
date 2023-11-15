#include "general.h"
#include "text.h"

/**
 * digits - function Counts the no. of digits of a number
 *
 * @n: the number.
 *
 * Return: returns Digits
 **/
int digits(int n)
{
	int i;

	for (i = 0; n != 0; i++, n /= 10)
		;

	return (i);
}

/**
 * to_string - Converts @number to string
 *
 * @number: number to convert
 *
 * Return: function returns the Number as string
 **/
char *to_string(int number)
{
	int n_dgts, i;
	char *_num;

	n_dgts = digits(number);
	_num = malloc(n_dgts * sizeof(char) + 2);
	if (number == 0)
	{
		_num[0] = '0';
		_num[1] = '\0';
		return (_num);
	}
	/* Checks for  NULL */

	_num[n_dgts] = '\0';
	for (i = n_dgts - 1; number != 0; number /= 10, i--)
		_num[i] = (number % 10) + '0';

	return (_num);
}


/**
 * is_numerical - function to check if is a digit.
 *
 * @n: the number
 *
 * Return: If is a number, return 1, else return 0
 */
int is_numerical(unsigned int n)
{
	return (n >= '0' && n <= '9');
}

/**
 * _atoi - Converts a str to a number
 *
 * @s: Str to be converted
 *
 * Return: the number
 */
int _atoi(char *s)
{
	unsigned int numbers, i;
	int sign;

	sign = 1;
	numbers = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		if (is_numerical(s[i]))
		{
			numbers = (s[i] - 48)	+ numbers * 10;

			if (s[i + 1] == ' ')
				break;
		}
		else if (s[i] == '-')
		{
			sign *= -1;
		}

	}

	return (numbers * sign);
}

/**
 * contains_letter - the funct searches non-digits in a string
 *
 * @s: String to be searched
 *
 * Return: If non-digits found, return _TRUE
 * if not, return _FALSE
 **/
int contains_letter(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (is_numerical(s[i]) == _FALSE)
			return (_TRUE);
	}

	return (_FALSE);
}
