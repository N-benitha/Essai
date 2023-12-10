#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Return: 0.
 */
int main(void)
{
	char *line = NULL;
	size_t len = 0;
	ssize_t nread;

	printf("$ ");
	nread = getline(&line, &len, stdin);
	if (nread != -1)
		printf("%s\n", line);
	else
		fprintf(stderr, "Error reading input.\n");
	free(line);
	return (0);
}
