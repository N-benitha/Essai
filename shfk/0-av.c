#include <stdio.h>
/**
 * main - Entry point
 * @argv: arguments
 *
 * Return: 0
 */
int main(int argc, char **argv)
{
	(void)argc;

	printf("Command Line arguments:\n");
	while (*argv != NULL)
	{
		printf("%s\n", *argv);
		argv++;
	}
	return (0);
}
