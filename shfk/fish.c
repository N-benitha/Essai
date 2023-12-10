#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>

void command(char *tok)
{
	if (access(tok, F_OK) == 0)
		printf("%s: File found\n", tok);
	else
		printf("%s: File doesn't exist\n", tok);
}
int main(void)
{
	char *buf = NULL;
	size_t buf_size = 0;
	char *token;

	while (1)
	{
		write(1, "Christmas* ", 11);
		getline(&buf, &buf_size, stdin);
		token = strtok(buf, " \t\n");

		if (strcmp(token, "which") == 0)
		{
			token = strtok(NULL, " \t\n");
			command(token);
		}
		else
		{
			printf("Command doesn't exist\n");
		}
	}
	return (0);
}
