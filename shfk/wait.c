#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

int main(void)
{
	pid_t pid;

	pid = fork();
	if (pid == -1)
	{
		perror("Unsuccessful\n");
		return (1);
	}
	if (pid == 0)
	{
		printf("Child process\n");
	}
	else
	{
		wait(NULL);
		printf("Parent Process\n");
	}
	return (0);
}
