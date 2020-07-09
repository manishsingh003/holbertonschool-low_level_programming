#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - Function concatenate two strings.
 * @s1: First string
 * @s2: Second String
 * @n: n bytes to concatenate
 *
 * Return: Pointer to char.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	int size;
	size_t i, j;

	size = _strlen(s1);
	i = 0;
	while (s2[i] && i <= n)
	{
		i++;
	}

	p = malloc(sizeof(char) * (size + i));
	if (!p)
		return (NULL);

	i = 0;
	while (s1[i])
	{
		p[i] = s1[i];
		i++;
	}

	j = 0;
	while (s2[j] && j < n)
	{
		p[i] = s2[j];
		i++;
		j++;
	}
return (p);
}
