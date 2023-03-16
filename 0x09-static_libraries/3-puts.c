#include "main.h"
#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * _puts -> this is a function that puts
 * @str: a param to _puts function
 */
void _puts(char *str)
{
	int i;

	if (*str != '\0')
	{
		i = 0;
		while (*(str + i) != '\0')
		{
			_putchar(*(str + i));
			i++;
		}
	}
	_putchar('\n');
}
