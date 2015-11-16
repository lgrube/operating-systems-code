#include <stdio.h>
int first = 23; //sets first number equal to 23
int second = 37; //sets second number to 37


int main() {
  for(int i=first;i<=second; i++) { //sets variable i equal to first
    if(i%2) { //test to see if its divisable by 2
      printf("this is odd: %d", i); //prints the number if its odd
      printf("\n"); //new line
    } else {
      printf("this is even: %d", i); //printf the number if its even
      printf("\n"); //new line
    } //end of else
  } // end of for
} //end of main
