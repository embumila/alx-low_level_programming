#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
*fill_words - fill the input string into 2D
*strtow - concatenates all the arguments of your program
*@str: string
*Return: a pointer to a new string
*allocate_memory - takes number of argument and create 2D
*count_words - takes the input and count number of space
*/
int count_words(char *str)
{
int count = 0;
for (int i = 0; str[i]; i++)
{
if (str[i] == ' ')
{
count++;
}
}
return (count + 1);
}
char **allocate_memory(int count)
{
char **p = malloc(sizeof(char *) * (count + 1));
for (int i = 0; i <= count; i++)
{
p[i] = malloc(sizeof(char) * 100);
}
return (p);
}
void fill_words(char **p, char *str)
{
int i = 0;
int j = 0;
int k = 0;
while (str[i])
{
if (str[i] != ' ')
{
p[j][k] = str[i];
k++;
}
else
{
p[j][k] = '\0';
j++;
k = 0;
}
i++;
}
p[j][k] = '\0';
}
char **strtow(char *str)
{
if (*str == '\0' || str == NULL)
{
return (NULL);
}
int count = count_words(str);
char **p = allocate_memory(count);
fill_words(p, str);
return (p);
}
