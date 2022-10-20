#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[])
{
    // YOUR CODE HERE
    int N = 10;

    int arr[N];

    int prev = 10, a;

    printf("Enter disk locations to service: ");

    for(int i=0; i<N; i++){
      scanf("%d", &a);
      arr[i] = a;
    }

    int sum = 0, val;
    for(int i=0; i<N; i++){
      printf("Sector %d\n", arr[i]);
      val = arr[i]-prev;
      if(val < 0)val = -val;
      sum += val;
      prev = arr[i];
    }

    printf("Total Disk Head Movement: %d\n", sum);

   return 0;
}