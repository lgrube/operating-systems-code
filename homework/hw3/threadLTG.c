//luke grube
//creating two threads one the prints helloworld and its thread id
//the other on prints all the files/folder in current directory

#include <stdio.h>
#include <pthread.h>
#include <sys/types.h>
#include <sys/syscall.h>
#include <stdlib.h>

void* helloThread(void* tmp) {
printf("Hello world, I am thread: %u\n", (unsigned int)pthread_self());
sleep(2);
return NULL;
}

int system (const char *command);

int main(int argc, char **argv) {
pthread_t thread1, thread2;
sleep(1);
pthread_create(&thread2, NULL, helloThread, NULL);
pthread_join(thread1, NULL);
pthread_join(thread2, NULL);
system("ls");
printf("I am the father process: %d\n", getpid());
return(0);
}
