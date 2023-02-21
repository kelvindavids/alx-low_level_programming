#include "main.h"

/**
 * _abs - computes the absolute value of an integer
 * @c: The number the be computed
 * Return: Absolute value of a nummber or 0
 */

int _abs(int c)

{
	if (c < 0)
	{
	int abs_val;

	abs_val = c * -1;
	return (abs_val);
	}
	return (c);

}
