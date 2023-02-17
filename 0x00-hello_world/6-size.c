#include <stdio.h>

/**
 * main - this is the main function
 *
 * Return: always 0
 */
int main(void)
{	printf("Size of a char: %lu bytes(s)", sizeof(char));
	printf("Size of an int: %lu bytes(s)", sizeof(int));
	printf("Size of a long int: %lu bytes(s)", sizeof(long int));
	printf("Size of a long long int: %lu bytes(s)", sizeof(long long int));
	printf("Size of a float: &lu byte(s)", sizeof(float));
	return (0);

}
