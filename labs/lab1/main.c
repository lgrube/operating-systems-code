#include<stdio.h> //standard input output and include functions such as printf and scanf
#include "hello.c" //includes the program hello.c prints the hello, cmp333 friends, new submission email
#include "fibonacci.c" //includes the program fibonacci.c which gives us the fibonacci answer when passing it a variable
int main() {
	printHello(); //prints the hello.c
	int a = fibonacci(10); //passes the number 10 to fibonacci
	printf("10 fib number%d\n", fibonacci(10)); //give you the fibonacci printout
	return 0;
} // end of main
