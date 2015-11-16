#include <stdio.h>
int begin = 0; //set begin variable
int end = 0; //set end variable
int increment = 0; //sets my variable for incrementation

int main() {
  printf("Please enter number you want to start at: "); //ask for a number
  scanf("%d", &begin); //stores that number in begin
  printf("Please enter number to end at: "); //ask for an end number
  scanf("%d", &end); //stores it in end

  for(int i=begin; i<=end; i++) { //start for loop
    if(i>28) { //test to see if its bigger than 28
      increment++; //adds one to increment each time its over 28
    } //end of if
  } //end of for
  printf("result:  %d ", increment); //prints the results
  printf("\n"); //new line
} // end of main
