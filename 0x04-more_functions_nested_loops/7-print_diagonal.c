#include "holberton.h"

/**
  * print_diagonal - draws a diagonal line on the terminal
  * @n: The number of times to print diagonal lines
  *
  * Return: void
  */


void print_diagonal(int n)
{
  if (n <= 0)
    {
      _putchar ('\n');
    }
  else
    {
      for (int i = 0; i < n; i++)
	{
	  for (int j = 0; j < i; j++)
	    {
	      _putchar ('%c', 32);
	    }
	  _putchar ('%c', 92);
	  _putchar ('\n');
	}
    }
 
}