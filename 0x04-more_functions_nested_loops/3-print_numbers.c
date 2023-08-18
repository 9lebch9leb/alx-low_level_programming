#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
void print_numbers(void)
{
	int i,result;
	
	for (i = 0 ; i < 10 ; i++)
	{
		result = i + 48;
		_putchar(result);
	}
	_putchar('\n');
}
