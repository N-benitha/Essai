#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * main - Entry point
 *
 * Return: 0.
 */
int main(int argc, char **argv)
{
	char *str;
	const char *delim;
	char *token;
	int j;

	if (argc != 3)
	{
		fprintf(stderr, "Usage: %s string delim", argv[0]);
		exit(EXIT_FAILURE);
	}
	delim = argv[2];
	for (j = 1, str = argv[1]; ; j++, str = NULL)
	{
		token = strtok(str, delim);
		if (token == NULL)
			break;
		printf("%d: %s\n", j, token);
	}
	return (0);
}
