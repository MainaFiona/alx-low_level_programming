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
	int l = 0;

	int r = n - 1;

	while (l < r)
	{
		int temp;

		temp = a[l];
		a[l] = a[r];
		a[r] = temp;
		l++;
		r--;
	}
}
