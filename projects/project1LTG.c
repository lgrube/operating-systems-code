#include <stdio.h>
#include <stdlib.h>

//luke grube
//december 1, 2015
//everything in big comment sections are debugging info

int main(void) {
	//declaring all the variables
	int a[500], n, compsci = 0, cal = 0, writing = 0, volleyball = 0, total = 0, temp=0;
	int MAXLENGTH = 25; //sets maxlength of name

  printf("how many students are you entering in: ");
  scanf("%d", &n);
  printf ("\n");

	int MAXSTRING = n;
	char firstname[MAXSTRING][MAXLENGTH];
//	printf("MAXSTRING %d\n", MAXSTRING);

/* this section ask for the name and each score then totals it*/
	for (int i = 0; i <n; i++)
	{
    printf("what was the students name: ");
    scanf("%s", firstname[i]);
    printf("what was the grade for computer science: ");
    scanf("%d", &compsci);
    printf("what was the grade for calculus: ");
    scanf("%d", &cal);
    printf("what was the grade for writing: ");
    scanf("%d", &writing);
    printf("what was the grade for volleyball: ");
    scanf("%d", &volleyball);
		printf("\n");
    total = compsci + cal + writing + volleyball;
    a[i] = total;

//		b[i+1] = total;
//    printf("this is i %d\n", i);
//    printf("total test: %d \n", total);
//    printf("this is a[i] %d \n", a[i]);
//		printf("this is b[i] %d\n", b[i-1]);

  }

//  for(int i=0; i<MAXSTRING; i++) {
//    printf("this is a name %s\n", firstname[i]);
//		fgets(firstname[i], MAXLENGTH, stdin);
//  }
//  for(int i=0; i<n; i++){
//    printf("This student %s", firstname[i]);
//		printf(" this is their total score %d\n", a[i]);
//  }


/* this is what does the organization*/
	for (int i=0 ; i<n ; i++) {
//		for (int j=0; j<n-i; j++) {
			if(a[i] < a[i+1]) {
				temp = a[i + 1];
				a[i + 1] = a[i];
				a[i] = temp;
//				printf("this is temp %d\n", temp);
//			printf("this is sub b %d\n", b[i]);
			}
//		printf (" this is sub a %d", a[i]);
//		}
	}
	/* this sections is what prints it all our in order*/
	for(int i=0; i<n; i++){
		printf("%s", firstname[i]);
		printf(" %d\n", a[i]);
	}
	printf("\n");

  return 0;
}
