#include <stdio.h>

int main(void)
{
	int a[500], i=0, j=0, n, t, compsci = 0, cal = 0, writing = 0, volleyball = 0, total = 0, subtotal = 0;
  char b[500];


    printf("how many students are you entering in: ");
    scanf("%d", &n);
    printf ("\n");

	for (i = 0; i <n; i++)
	{
    printf("what was the students name: ");
    scanf("%s", &b[i]);
    printf("what was the grade for computer science: ");
    scanf("%d", &compsci);
    printf("what was the grade for calculus: ");
    scanf("%d", &cal);
    printf("what was the grade for writing: ");
    scanf("%d", &writing);
    printf("what was the grade for volleyball: ");
    scanf("%d", &volleyball);
    total = compsci + cal + writing + volleyball;
    a[i] = total;
    printf("this is j%d\n", i);
    printf("total test: %d \n", total);
    printf("this is a[j] %d \n", a[i]);
  }
  for(int i=0; i<b[i]; i++) {
    printf("this is a name %c\n", b[i]);
  }
  for(int i=0; i<n; i++){
    printf("this is a test on printing all the numbers %d\n", a[i]);
  }

	printf ("\n Descending order: ");
	for (i=n ; i>0 ; i--)
	{
		printf (" %d", a[i-1]);
	}
printf("\n");
      /* indicate successful completion */
      return 0;
}
