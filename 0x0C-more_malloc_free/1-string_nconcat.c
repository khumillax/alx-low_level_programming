#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat - concatenates two strings
 * @s1: string to be append to
 * @s2: string to be concatenate from
 * @n: number of bytes from s2 to concatenate to s1
 * Return: pointer to the resulting string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int i = 0, j = 0, len1 = 0, len2 = 0;

	/*get length of s1*/
	while (s1 && s1[len1])
		len1++;
	/*get length of s2*/
	while (s2 && s2[len2])
		len2++;

	/*reserve memory using malloc*/
	if (n < len2)
		s = malloc(sizeof(char) * (len1 + n + 1));
	else
		s = malloc(sizeof(char) * (len1 + len2 + 1));

	/*check that malloc did not fail*/
	if (s == NULL)
		return (NULL);

	/*transfer all bytes from s1 to new buffer s*/
	while (i < len1)
	{
		s[i] = s1[i];
		i++;
	}

	/*transfer n bytes from s2 to remaining spaces of new buffer s*/
	while (n < len2 && i < (len1 + n))
		s[i++] = s2[j++];

	while (n >= len2 && i < (len1 + len2))
		s[i++] = s2[j++];

	/*append terminating null byte at end*/
	s[i] = '\0';
	return (s);
}
