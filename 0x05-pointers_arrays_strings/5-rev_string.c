#include "main.h"
#include <string.h>

/**
 * rev_string - reverse a string
 *
 * @s: parameter s
 */
void rev_string(char *s)
{
	char temp;
	int initial = 0;
	int end = 0;

	end = strlen(s) - 1;

	while (initial < end)
	{
		temp = s[end];
		s[end] = s[initial];
		s[initial] = temp;
		initial++;
		end--;
	}
}
