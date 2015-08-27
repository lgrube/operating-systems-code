/**  luke grube
 *   august 27 2015
 *
 *  Problem discription:
 *      Given two input numbers, say lower and upper,  there are some numbers that cannot be divided exactly  by 7
 *      calculate the sum  of these numbers. (inclusive)
 *      For example : lower = 0, upper = 14, you should print 99 (== ( 1+ 2 +..+6+8+...+13+15 )
 *      Another example is : lower = -1, upper = 0, then you should print  -1
 *
 *      NOTE:
 *      You can NOT assume that the input are all valid
 *          i.e. you need to deal with these naughty user
 *      The user might need to play more than one time, i.e. use loop 
 */
 

#include<stdio.h>

	//creates two variables
	int lower=0;
	int upper=0;
	int numoftimes=0;
	int total = 0;
	int x = 0;
	
	int Add(){ //add these two variables together
		return total = total + x; // adds x to total each time
	} // end of add 

	int count() {
		printf ("How many times would you like to play this: "); // ask you how many times to play
		if(scanf ("%d", &numoftimes) ==1 && numoftimes>=0){ // scans if its an int
		return numoftimes;
		}
		else{
		printf("you didnt enter an number play again\n"); //exits out if it isnt a int
		}
	}


int main(){
	int answer=0;
	int num=0;
	int place=0; 
	place=count();//setting how many times you want to play the game
	for(num=0;num<place;num++){//how many times your playing
		if(scanf ("%d", &lower) ==1 && lower>=0){} //test to make sure lower is an int
		if(scanf ("%d", &upper) ==1 && upper>=0){} //test to make sure upper is an int
		for(x=lower;x<upper;x++){ //for loop for mod7
			if(x%7 != 0) {//test to see mod 7 not equal to 0
				answer = Add(x);//calls add function
			}//end of if

		}// end of second for loop
		printf("Here's your answer\n");
		printf("%d\n", answer);// prints answer
		printf("\n");

	}//end of first for loop
	return 0;
}//end of main
