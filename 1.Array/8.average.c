#include <stdio.h>

// This program finds the average of the array and returns it.

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

int average(struct Array arr){
  int i, sum = 0;
  float avg = 0.0;

  for(i = 0; i < arr.length; i++){
    sum += arr.A[i];
  }
  avg = sum / arr.length;
  return avg;
}

int main(){
  struct Array arr = {{11, 5, 9, 16, 19, 22, 54, 63, 88, 2}, 10, 10};
  
  display(arr);
  float avg = average(arr);
  printf("%.2f\n", avg);

  return 0;
}

