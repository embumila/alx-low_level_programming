#include "main.h"

/**
 * _isalpha - Determin  alphabetic character
 * @c:Is the character being evaluated
 *
 * Return: 1 if it is an alphabetic character else  0 for
*/
int _isalpha(int c)
{
if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
{
return (1);
}
return (0);
}
