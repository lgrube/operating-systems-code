/**  luke grube
 *  working on dividing everything by mod 7
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
	int total=0;
	int numoftimes=0;
	int mod7array[10000];
	
	
	int Add(x){ //add these two variables together
//		return lower + upper;
		return total = total + x;
	} // end of add 

	int count() {
		printf ("How many times would you like to play this: ");
		scanf ("%d", &numoftimes);
		return numoftimes;
	}

int main(){
	printf("hello");//prints hello fine
	int x = lower;
	int place = 0;
	int num = 0;
	int answer = 0; //creates answer variable
	place = count();//number of times played
	for(num=0;num<place;num++){ //loop for how many times you play the gamei
		scanf("%d", &lower);
		scanf("%d", &upper);
		for(x=lower; x<upper; x++) { //loop through number
//			printf("this is x %d\n\n",x);
//			printf("%d",x%7);
			if(x % 7 !=0){ // mod test
				printf("%d", x);
 

			}
	      printf("Heres your answer\n");
	      answer = Add(x);
              printf("%d\n",answer);
              printf("\n");
		}
        return 0;
	}
}
