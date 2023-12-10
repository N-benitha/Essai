#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <string.h>

int main(void)
{
	char *buf = NULL;
	size_t buf_size = 0;
	char *token;
	const char *delim = "\t\n";
	char **arr;
	int i = 0, status;
	pid_t baby_pid;

	while (1)
	{
		write(1, "$ ", 2);
		getline(&buf, &buf_size, stdin);
		token = strtok(buf, delim);
		arr = malloc(sizeof(char *) * 1024);

		while (token)
		{
			arr[i] = token;
			token = strtok(NULL, delim);
			i++;
		}
		arr[i] = NULL;
		baby_pid = fork();

		if (baby_pid == 0)
		{
			if (execve(arr[0], arr, NULL) == -1)
				perror("Error");
		}
		else
		{
			wait(&status);
		}
		i = 0;
		free(arr);
	}
	return (0);
}
