#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/stat.h>

int main(void)
{
   pid_t pid;
   pid = fork();
   if(pid<0)
   {
     printf("faild condition");
     exit(1);
   }
   if(pid>0)
   {
     printf("successful condition");
     printf("parent process %d\n",getppid());
     exit(1);
   }
   if(pid==0)
   {
     printf("child process %d\n",getpid());
     sleep(5);
   }
}
