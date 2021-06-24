#include "holberton.h"

/**
  * print_square - prints a square, followed by a new line
  * @size: The number of squares
  *
  * Return: void
  */


void print_square(int size)
{
  if (size <= 0)
    {
      _putchar ('\n');
    }
  else
    {
      for (int i = 0; i < size; i++)
	{
	  for (int j = 0; j < size; j++)
	    {
	      _putchar ('%c', 35);
	    }
	   _putchar ('\n');
	}
    }
}
