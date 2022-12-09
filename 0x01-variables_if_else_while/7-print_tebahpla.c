#include <stdio.h>

/**
 * main - Reversing lowercase alphabets
 *
 * Return: Always 0.
 */
int main(void)
{
char letter;
for (letter = 'z'; letter >= 'a'; letter--)
putchar(letter);
putchar('\n');
return (0);
}
