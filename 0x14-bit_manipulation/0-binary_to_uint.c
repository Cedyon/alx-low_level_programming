#include <stdio.h>

/**
 * binary_to_uint - Afunction that converts binary number to an unsigned int(u)
 * @b: is pointing to a string of 0 and 1 chars
 * Return: the converted number.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int value = 0;

	if (b == NULL)
		return (0);
	while (*b != '\0')
	{
		value = value << 1;
		if (*b != '1' && *b != '0')
			return (0);
		else if (*b == '1')
			value = value | 1;
		b++;
	}
	return (value);
}