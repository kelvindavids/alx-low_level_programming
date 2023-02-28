#include <stdio.h>

/**
 * swap_int - swaps the values of 2 ints
 * @a: 1st int to be swapped
 * @b: 2nd int to be swapped
 *
 * Return: nothing
 */

void swap_int(int *a, int *b)
/* a function that swaps two ints */
{

	int temp = *a;
	*a = *b;
	*b = temp;
}
