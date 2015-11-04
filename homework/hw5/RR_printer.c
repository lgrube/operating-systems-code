#include <stdio.h>
int main(){
  int m,n;
  printf("Please enter number of threads: ");
  scanf("%d", &n);
  printf("Please enter number to print out: ");
  scanf("%d", &m);

//    int i = 1; //this is n
//    int j = 4; //this is m
    int k = m; //this is a test variable
    while(n<=k) {
        for (n=n; n<=k; n++) {
          printf("thread number: %d has printed out: %d \n", n , m);
          m++;
          }
    }
    return 0;
}
