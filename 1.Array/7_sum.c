#include <stdio.h>

// This program find to the sum of an array and return it's sum.

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

int sum(struct Array arr){
  int i, sum = 0;
  for(i = 0; i < arr.length; i++){
    sum = sum + arr.A[i];
  }
  return sum;
}


int main(){
  struct Array arr = {{11, 15, 29, 9, 55, 6, 44, 14, 19, 53}, 10, 10};

  display(arr);
  int total = sum(arr);
  printf("The sum of array is %d.\n", total);

  return 0;
}
