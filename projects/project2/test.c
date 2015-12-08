#include <stdio.h>              /*printf and scanf option*/
#include <math.h>

void change(double coin_change, int *quarters, int *dimes, int *nickels, int *pennies);          /*function protype*/

int main(void)
{
    int fifties = 0, twenties = 0, tens = 0, fives = 0, dollars = 0, quarters = 0, dimes = 0, nickels = 0, pennies = 0;
    double amt_paid = 0, amt_due = 0, amt_change = 0, coin_change = 0;          /*declared avriables*/

    printf("Enter the amount paid> ");                  /*Prompt user to enter amount paid*/
    scanf("%lf", &amt_paid);

    printf("Enter the amount due> ");                   /*Prompt user to enter amount due*/
    scanf("%lf", &amt_due);

    amt_change = amt_paid - amt_due;                    /*Formula for amount of change to be given*/
    dollars = (amt_change);

    coin_change = (100 * amt_change);
    printf("\n%f\n", coin_change);

    change(coin_change, &quarters, &dimes, &nickels, &pennies);

    printf("Change is fifties: %d$, twenties: %d$, tens: %d$, fives: %d$, dollars: %d$, quarters: %d, dimes: %d, nickels: %d,\
           pennies: %d", fifties, twenties, tens, fives, dollars, quarters, dimes, nickels, pennies);
    return(0);
}

void change(double coin_change, int *quarters, int *dimes, int *nickels, int *pennies)
{
    int q = 1, d = 1, n = 1, p = 1;
    do {
      if(coin_change >= 25){
          *quarters += q;
          coin_change -= 25;
      }
      else if (coin_change >= 10) {
           *dimes += d;
           coin_change -= 10;
       }
       else if (coin_change  >=  5) {
           *nickels += n;
           coin_change -= 5;
       }
       else if (coin_change >= 1) {
           *pennies += p;
           coin_change -= 1;
       }
   } while (coin_change >= 1);
 }
