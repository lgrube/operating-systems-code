#include<stdio.h>
#include<pthread.h>

int main(int argc, char *argv[]) {
	pid_t pid = getpid();

	printf("my pid: %d\n", pid);
	 printf("input parameters: %s  %s \n", argv[0],argv[1]); 

  getchar();
  return 0;
}
