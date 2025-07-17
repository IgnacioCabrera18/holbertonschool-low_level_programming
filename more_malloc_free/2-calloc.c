#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 *
 *
 *
 *
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *a;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	a = malloc(nmemb * size);
	if (a == NULL)
	{
		return (NULL);
	}
	memset(a, 0, nmemb * size);;
	return (a);
}
