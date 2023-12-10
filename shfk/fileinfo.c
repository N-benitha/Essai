#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>

int main(int argc, char **argv)
{
	unsigned int i;
	struct stat b;

	if (argc < 2)
	{
		printf("Usage: %s <pathname>\n", argv[0]);
		exit(EXIT_FAILURE);
	}
	i = 1;
	while (argv[i])
	{
		printf("%s:", argv[i]);
		if (stat(argv[0], &b) == 0)
		{
			printf("FOUND\n");
		}
		else
		{
			printf("NOT FOUND\n");
		}
		i++;
	}
	return (0);
}
