#include<stdio.h>
#include<pthread.h>
int i=0;
int main() {
	for(i=0; i<100; i++) {
		pid_t pid = fork();
		printf("pid %d \n", pid);
	}
	return 0;
}
