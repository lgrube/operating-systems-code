#include <stdio.h>

char name[20] = ""; //used for name of student
int compsci = 0; //used for computer science score
int cal = 0;//used for calculus score
int writing = 0;//used for writing score
int volleyball = 0;//used for volleyball score
int total = 0; //used to add all the scores up
int numOfRuns = 0; //number of students entering in

int main() {

  printf("how many students are you entering in: ");
  scanf("%d", &numOfRuns);

  for(int i=0; i<numOfRuns; i++) {
    printf("what was the students name: ");
    scanf("%s", &name);
    printf("what was the grade for computer science: ");
    scanf("%d", &compsci);
    printf("what was the grade for calculus: ");
    scanf("%d", &cal);
    printf("what was the grade for writing: ");
    scanf("%d", &writing);
    printf("what was the grade for volleyball: ");
    scanf("%d", &volleyball);

    total = compsci + cal + writing + volleyball;
//    printf("total test: %d", total);

    printf("Students name: %s \n", name);
    printf("Students grade for computer science: %d \n", compsci);
    printf("Students grade for calculus: %d \n", cal);
    printf("Students grade for writing: %d \n", writing);
    printf("Students grade for volleyball: %d \n", volleyball);
    printf("Students total grade: %d \n", total);


//    printf("ending %d; number of runs %d", compsci, numOfRuns);
  } // end of for

} // end of main
