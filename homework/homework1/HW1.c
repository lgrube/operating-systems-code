/**  luke grube
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
	int lower;
	int upper;

	int Add(){ //add these two variables together
		return lower + upper;
	} // end of add 

	int main(){
		int answer; //creates answer variable
		scanf ("%d", &lower);
		scanf ("%d", &upper);
		answer = Add();
		printf("%d\n",answer);
		return 0;
	}
