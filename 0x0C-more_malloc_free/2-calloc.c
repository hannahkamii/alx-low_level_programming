#include <stdlib.h>
#include "main.h"
/**
 * *_memset - fills memory with a constant byte
 * @s: memory area to be filled
 * @b: cher to copy
 * @n: number of times to copy b
 * Return: pointer to the memory s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int p;

	for (p = 0 ; p < n ; p++)
	{
		s[p] = b;
	}
	return (s);
}
/**
 * *_calloc - function that allocates memory for an array
 * @nmemb: number of elements in a array
 * @size: size of each element
 * Return: pointed to the allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;

	if (nmemb == 0 || size == 0)
		return (NULL);
	p = malloc(size * nmemb);
	if (p == NULL)
		return (NULL);
	_memset(p, 0, nmemb * size);
	return (p);
}
