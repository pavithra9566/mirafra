#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
void  main()
{
   pid_t pid;
   pid=fork();
   if (pid==0)
   {
      printf("Childs process id : %d\n",getppid());
      sleep(5);
      printf("Child process id : %d \n", getpid());
      printf("Child's Parent process id : %d\n",getppid());
    }  
   else
    {
      printf("I am a parent process\n");
      printf("Parent process id : %d \n",getpid());
      printf("Parent's parent id : %d\n",getppid());
    }
	
}

