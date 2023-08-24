#include "shell.h"

/**
 * bfree - this will free a pointer and NULLs the address
 * @ptr: the address of pointer to free
 *
 * Return: Return 1 if freed, Return 0 if otherwise
 */
int bfree(void **ptr)
{
	if (ptr && *ptr)
	{
		free(*ptr);
		*ptr = NULL;
		return (1);
	}
	return (0);
}
