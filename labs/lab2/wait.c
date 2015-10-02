#include<stdio.h>
#include<pthread.h>

int main() {
	pid_t pid = fork();
	int exit;
	if(pid !=0) {
		wait(&exit);
	}
	if(pid == 0) {
		printf("child\n");
	}else {
		printf("parent\n");
	}
	printf("child process always finishes first\n");
}
