#include "holberton.h"

/**
  * more_numbers - Print 10 times the numbers from 0 up to 14
  *
  * Return: 10 times of the numbers from 0 up to 14
  */

void more_numbers(void)
{
  int i, j;
  for (i = 0; i < 10; i++)
    {
      for (j = 0; j <= 14; j++)
	{
	  _putchar (j + '0');
	}
      _putchar ('\n');
    }
  _putchar ('\n');
}
