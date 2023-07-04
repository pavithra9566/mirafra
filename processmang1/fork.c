#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

void main()
{
  pid_t pid;
  pid = fork();
  if(pid==0)
  {
    printf("child process id %d\n",getpid());
    printf("child's parent if %d\n",getppid());
  }
  else
  {
    printf("parent process id %d\n",getpid());
    printf("parent's parent id %d\n",getppid());
  }
} 
