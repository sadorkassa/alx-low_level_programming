#include "holberton.h"

/**
  *Computes the absolute value of an integer.
  *
  * Return: Absolute value of number or zero
  */
int _abs(int s)
{
	if (s < 0)
	{
		int abs_val;

		abs_val = s * -1;

		return (abs_val);
	}

	return (s);
}
