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
	int lower=0;
	int upper=0;
	int numoftimes=0;
	int newarray[10000000000000000];

//	int x=0;
//	for (x=lower;x<upper;x++){
//		if(xmod7=0){
//		x = newarray;
//		} // end of if	
//	}// end of for loop
	
	int Add(){ //add these two variables together
		return lower + upper;
	} // end of add 

	int count() {
		printf ("How many times would you like to play this: ");
		scanf ("%d", &numoftimes);
		return numoftimes;
	}
int main(){

	int x=0;
	int total=0;;
	for(x=lower;x<upper;x++){
		if(x%7 == 0){
			newarray[] = x;
		}
//	return total = total +;
	}

	int num=0;
	int place=0;
	place=count();
	for(num=0;num<place;num++){
		int answer; //creates answer variable
		scanf ("%d", &lower);
		scanf ("%d", &upper);
		answer = Add();
		printf("Heres your answer\n");
		printf("%d\n",answer);
		printf("\n");
	}
	return 0;
}
