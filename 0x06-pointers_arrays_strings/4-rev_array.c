#include "main.h"
#include <string.h>

/**
 * reverse_array - reverse an array
 *
 * @a: array to reverse
 * @n: size of the array
 */
void reverse_array(int *a, int n)
{
	int i = 0;

	int r = n - 1;

	while (i < r)
	{
		int temp;

		temp = a[i];
		a[i] = a[r];
		a[r] = temp;
		i++;
		r--;
	}
}
