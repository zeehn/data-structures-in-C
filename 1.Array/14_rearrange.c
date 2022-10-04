#include <stdio.h>

// This program partitions the array into negative and positive half of numbers.
// The numbers that are negative are shifted to left half and 0 or positive are shifted to the right half of the array.

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

void rearrange(struct Array *arr){
  int i = 0;
  int j = arr->length - 1;
  int temp;

  while(i < j){
    while(arr->A[i] < 0)
      i++;
    while(arr->A[j] >= 0)
      j--;
    if(i < j){
      temp = arr->A[i];
      arr->A[i] = arr->A[j];
      arr->A[j] = temp;
    }
  }
}

int main(){
  struct Array arr = {{-1, 6, 4, -11, 2, -4, -5, -18, 0, -9}, 10, 10};
  
  display(arr);
  rearrange(&arr);
  display(arr);

  return 0;
}
