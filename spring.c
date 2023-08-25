#include "shell.h"

/**
 * _strlen - this will return the length of a string
 * @s: the string of length to check
 *
 * Return: the integer length of string
 */
int _strlen(char *s)
{
	int i = 0;

	if (!s)
		return (0);

	while (*s++)
		i++;
	return (i);
}

/**
 * _strcmp - this performs lexicogarphic comparison of two strangs.
 * @s1: this is the initial strang
 * @s2: this is the second strang
 *
 * Return: return negative if s1 < s2, return positive if s1 > s2,
 * return zero if s1 == s2
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2)
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		s1++;
		s2++;
	}
	if (*s1 == *s2)
		return (0);
	else
		return (*s1 < *s2 ? -1 : 1);
}

/**
 * starts_with - this will check if needle begins with haystack
 * @haystack: string to look for
 * @needle: the substring to locate
 *
 * Return: address of next character of haystack or NULL
 */
char *starts_with(const char *haystack, const char *needle)
{
	while (*needle)
		if (*needle++ != *haystack++)
			return (NULL);
	return ((char *)haystack);
}

/**
 * _strcat - this will concatenate two strings
 * @dest: this is the destination buffer
 * @src: this is the source of buffer
 *
 * Return: this is the pointer to location buffer
 */
char *_strcat(char *dest, char *src)
{
	char *ret = dest;

	while (*dest)
		dest++;
	while (*src)
		*dest++ = *src++;
	*dest = *src;
	return (ret);
}

