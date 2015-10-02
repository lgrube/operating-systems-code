#include<stdio.h>
#include<pthread.h>
int i=0;
int a=0;
int main() {
	for(i=0; i<3; i++) {
		pid_t pid = fork();

		if(pid>0){
		printf("we get a pid from fork, we are parent process\n");
		a=6;
		}else {
		printf("we are child\n");
		}
		printf("pid %d \n", pid);
	}
	return 0;
}
