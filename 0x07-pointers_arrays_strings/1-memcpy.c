#include "main.h"
<<<<<<< HEAD

/**
 * *_memcpy - copies memory area
 * @dest: memory area
 * @src: source
 * @n: length of src
 *
 * Return: pointer to dest.
=======
/**
 * _memcpy - copies memory area,
 * @dest: destination memory area.
 * @src: source memory area.
 * @n: bytes filled.
 * Return: the pointer to dest.
>>>>>>> 7a67f96df490723a1c01cf1e6dd31f9db5ee71b9
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
<<<<<<< HEAD
	{
		dest[i] = src[i];
	}
=======
		*(dest + i) =  *(src + i);

>>>>>>> 7a67f96df490723a1c01cf1e6dd31f9db5ee71b9
	return (dest);
}
