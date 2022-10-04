#include <stdio.h>

// This program finds the max number in an array of numbers.

struct Array {
  int A[10];
  int size;
  int length;
};

void display(struct Array arr){
  int i;
  for(i = 0; i < arr.length; i++){
    printf("%d ", arr.A[i]);
  }
  printf("\n");
}

int max(struct Array arr){
  int i;
  int max = arr.A[0];
  for(i = 1; i < arr.length; i++){
    if(arr.A[i] > max){
      max = arr.A[i];
    }
  }
  return max;
}

int main(){
  struct Array arr = {{11, 16, 23, 22, 19, 54, 99, 62, 28, 65}, 10, 10};

  display(arr);
  int max_num = max(arr);
  printf("The max number in the array is %d.\n", max_num);

  return 0;
}
