#include "main.h"
#include <limits.h>

/**
 *_atoi - is the main function
 *@s: is str
 *Return: res * sig
 */

int _atoi(char *s)
{
	int sign = 1, res = 0, idx = 0;

	while (s[idx] == ' ')
	{
		idx++;
	}
	if (s[idx] == '-' || s[idx] == '+')
	{
		if (s[idx++] == '-')
		{
			sign = -1;
		}
	}
	while (s[idx] >= '0' && s[idx] <= '9')
	{
		if (res > INT_MAX / 10 || (res == INT_MAX / 10 && s[idx] - '0' > 7))
		{
			return sign == 1 ? INT_MAX : INT_MIN;
		}
		res = 10 * res + (s[idx++] - '0');
	}
	return res * sign;
}
