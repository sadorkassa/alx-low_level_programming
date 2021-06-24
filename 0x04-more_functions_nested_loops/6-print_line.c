#include "holberton.h"

/**
  * print_line - draws a straight line in the terminal
  * @n: The number of lines to draw
  *
  * Return: void
  */


void print_line(int n)
{
  if (n <= 0)
    {
      _putchar ('\n');
    }
  else
    {
      for (int i = 0; i < n; i++)
	{
	  _putchar ("%c", 95);
	}
    }
  _pputchar ('\n');
}
