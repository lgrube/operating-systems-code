#include<stdio.h>

int main() {
	printf("start\n");

	fork();
	printf("finish\n");
	return 0;
}
