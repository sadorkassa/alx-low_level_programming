#include "holberton.h"

/**
  * print_alphabet in lower case
  *
  * Return: no return
  */
void print_alphabet(void)
{
	char s;

	for (s = 'a'; s <= 'z'; s++)
	{
		_putchar(s);
	}

	_putchar('\n');
}
