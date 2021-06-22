#include "holberton.h"
/**
 *prints 10 times the alphabet in lowercase 
 *
 *Return: Always 0
 */
void print_alphabet_x10(void)
{
  char s;
  int j;
  for(j = 1; j <= 10; j++)
    {
        for(s = 'a'; s <= 'z'; s++)
            {
               _putchar(s);
            }   
       _putchar('\n');
    }
}

