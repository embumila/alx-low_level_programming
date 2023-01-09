

#include "main.h"

/**
 * _islower - Examine for lower case character
 *@c: is the character is being chacked
 *
 * Return: 1 if lowercase character identified else 0
 */
int _islower(int c)
{
if (c >= 97 && c <= 122)
{
return (1);
}
return (0);
}
