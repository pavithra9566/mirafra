#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
int a = 5;
int b = 10;
void main()
{
  int a = 15;
  int b = 20;
  pid_t pid;
  pid = fork();
  if(pid==0)
  {
    printf("child process id %d\n",getpid());
    printf("child's parent if %d\n",getppid());
    printf("%p %p\n",&a,&b);
    sleep(5);
  }
  else
  {
    printf("parent process id %d\n",getpid());
    printf("parent's parent id %d\n",getppid());
    printf("%p %p\n",&a,&b);
  }
} 
