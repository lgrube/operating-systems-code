#include <stdio.h>
#include <math.h>

void change(float changeDue, int *quarters, int *dimes, int *nickels, int *pennies);

int main(void) {
  float amountDue = 0.0; //stores amountDue
  float amountPaid = 0.0; //stored amountPaid
  float changeDue = 0.0; //stores changeDue
  float coin_change; //stores changeDue used for math functions
  int quarters = 0; //quarters
  int dimes = 0;//dimes
  int nickels = 0;//nickels
  int pennies = 0;//pennies

  printf("what was the total price of the object: "); //ask for the amount of the object
  scanf("%f", &amountDue);
//      printf("%.02f", amountDue);
  printf("\n");
  printf("what was the total amount of money you gave: "); //ask for the amount you gave
  scanf("%f", &amountPaid);
//      printf("%.02f", amountPaid);
  printf("\n");

  changeDue = amountPaid - amountDue; //subtracts the amount
  printf("here is the total change: "); //stores the changeDue here with a .02 decimal
  printf("%.02f\n", changeDue);

  coin_change = (100 * changeDue); //gets ride of the decimal
  //printf("\n%f\n", coin_change);

  change(coin_change, &quarters, &dimes, &nickels, &pennies); //calls the change function

  printf("Change is quarters: %d, dimes: %d, nickels: %d, pennies: %d\n", quarters, dimes, nickels, pennies); //prints the final output
  return(0);
}// end of main

void change(float coin_change, int *quarters, int *dimes, int *nickels, int *pennies)
{
   int q = 1, d = 1, n = 1, p = 1; //gives all the values 1
   do {
       if(coin_change >= 25){ //tesing if the change is greater than or equal to 25
           *quarters += q; //adds 1 point to quarters
           coin_change -= 25; //subtracts 25 from total changeDue
       }
       else if (coin_change >= 10) {//tesing if the change is greater than or equal to 10
            *dimes += d;//adds 1 point to dimes
            coin_change -= 10;//subtracts 10 from total changeDue
        }
        else if (coin_change  >=  5) {//tesing if the change is greater than or equal to 5
            *nickels += n;//adds 1 point to nickels
            coin_change -= 5;//subtracts 5 from total changeDue
        }
        else if (coin_change >= 1) {//tesing if the change is greater than or equal to 1
            *pennies += p;//adds 1 point to pennies
            coin_change -= 1;//subtracts 1 from total changeDue
        }
    } while (coin_change >= 1); //finishing while loop
}//end of change
