#include <stdlib.h>
#include "main.h"
/**
 * *string_nconcat - concentrates n bytes of aa string to another string
 * @s1: string to append to
 * @s2: string to concatenate from
 * @n: number of bytes from s2 to concatenate to s1
 * Return: pointer to the resulting string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	unsigned int s = 0, k = 0, len1 = 0, len2 = 0;

	while (s1 && s1[len1])
		len1++;
	while (s2 && s2[len2])
		len2++;
	if (n < len2)
		p = malloc(sizeof(char) * (len1 + n + 1));
	else
		p = malloc(sizeof(char) * (len1 + len2 + 1));
	if (!p)
		return (NULL);
	while (s < len1)
	{
		p[s] = s1[s];
		s++;
	}
	while (n < len2 && s < (len1 + n))
		p[s++] = s2[k++];
	while (n >= len2 && s < (len1 + len2))
		p[s++] = s2[k++];
	p[s] = '\0';
	return (p);
}
