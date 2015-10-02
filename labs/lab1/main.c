#include<stdio.h>
#include"function.h"
#include "hello.c"
#include "fibonacci.c"
int main() {
	printHello();
	int a = fibonacci(10);
	printf("10 fib number%d\n", fibonacci(10));
	return 0;
}
