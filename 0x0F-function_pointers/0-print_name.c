#include <stdio.h>
/**
 * print_name - prints a name
 * @name: name to print
 * @f: function pointer to function to print name
 * Return: name
 */
void print_name(char *name, void (*f)(char *))
{
	printf ("My name is %s", name);
}

