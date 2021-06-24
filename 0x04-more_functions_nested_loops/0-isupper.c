#include "holberton.h"

/**
  * _isupper - Check if a letter is upper
  * @y: The number to be checked
  *
  * Return: 1 if c is upper letter or 0 otherwise
  */
int _isupper(int y)
{
    if (y >= 65 && y <= 90)
    {
            return (1);
    }
 
    return (0);
}
