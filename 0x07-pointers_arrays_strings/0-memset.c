#include "main.h"
<<<<<<< HEAD

/**
 * *_memset - fill memomry buffer with constants bytes
 *
 * @s: ref parameter to store the address
 * @b: value parameter, number of bytes
 * @n: value parameter, size of buffer
 * Return: the address of the buffer
 */

=======
/**
 * _memset - fills memory with a constant byte,
 * @s: memory area.
 * @b: constant byte.
 * @n: bytes filled.
 * Return: the pointer to dest.
 */
>>>>>>> 7a67f96df490723a1c01cf1e6dd31f9db5ee71b9
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
<<<<<<< HEAD
	{
		s[i] = b;
	}
=======
		*(s + i) =  b;

>>>>>>> 7a67f96df490723a1c01cf1e6dd31f9db5ee71b9
	return (s);
}
