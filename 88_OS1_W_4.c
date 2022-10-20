
#include <stdio.h>
#include <stdlib.h>

int main(void) {
    
  int N = 0;
  int sum = 0;
  int i;
  
  int *iptr, *tmp;
  
  printf("Enter value of N [1-10]: ");
  scanf("%d", &N);
  
  iptr = (int *) malloc(N * sizeof(int));
  
  if (iptr == NULL) {
    printf("Unable to allocate memory space. Program terminated.\n");
    return -1;
  }
  
  printf("Enter %d integer number(s)\n", N);
  for (i = 0, tmp = iptr; i < N; i++, tmp++) {
    printf("Enter #%d: ", (i+1));
    scanf("%d", tmp);    
    sum += *tmp;
  }
  
  printf("Sum: %d\n", sum);  
  free(iptr);

  return 0;
}