#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/types.h>
#include<sys/wait.h>
int main()
{
	pid_t pid;
	pid=fork();
	if(pid==0)
	{
		printf("im child process\n");
		printf("child pid:%d\n",getpid());
		printf("child parents pid:%d\n",getppid());
		exit(5);
	}
	else
	{
		getchar();
		printf("im parent pro\n");
		printf("parent id:%d\n",getpid());
		printf("parent parentid:%d\n",getppid());
	}
}

