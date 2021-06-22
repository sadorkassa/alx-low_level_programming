#include "holberton.h"
/**
 *checks for alphabetic character
 *
 *Return 1 if c is a letter, lower case or upper case
 *Return 0 otherwise
 */
int _isalpha(int c)
{
  if ((c >= 65 && C <= 90) || (c >= 97 && C <= 122))
	{
      return(1);
        }
   else
    {
      return(0);
    }
  _putchar('\n');
}

