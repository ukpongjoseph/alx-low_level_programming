#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Print upper and lower case of alphabets
 * Return: Always (Success)
 *
 */

int main(void)
{
	char low;

	for (low = 'a'; low <= 'z'; low++)
	putchar(low);

	for (low = 'A'; low <= 'Z'; low++)
	putchar(low);
	putchar('\n');

	return (0);
}
