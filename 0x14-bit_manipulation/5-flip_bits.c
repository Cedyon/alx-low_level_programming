#include "main.h"

/**
 * flip_bits - function that returns the number of bits you would
 * need to flip to get from one number to another.
 * @n: unsigned long int 1
 * @m: unsigned long int 2
 * Return: number of flip in inputs.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int flips;

	for (flips = 0; n || m; n >>= 1, m >>= 1)
	{
		if ((n & 1) != (m & 1))
			flips++;
	}
	return (flips);
}
