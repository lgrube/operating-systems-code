//luke grube
//creating two threads one the prints helloworld and its thread id
//the other on prints all the files/folder in current directory

#include <stdio.h>
#include <pthread.h>
#include <sys/types.h>
#include <sys/syscall.h>
//#include "lsLinkFile"

void* helloThread(void* tmp) {
printf("Hello world, I am thread: %u\n", (unsigned int)pthread_self());
sleep(2); // Keep it alive so we're sure the second thread gets a unique ID.
return NULL;
}

int main(int argc, char **argv) {
pthread_t thread1, thread2;
sleep(1); // Hack to avoid race for stdout.
pthread_create(&thread2, NULL, helloThread, NULL);
pthread_join(thread1, NULL);
pthread_join(thread2, NULL);
printf("I am the father process: %d\n", getpid());
return(0);
}
